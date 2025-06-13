//classe onde esta oq cada funcao faz

#include <iostream>
#include "fila.h"

using namespace std;

Fila::Fila()
{
   primeiro = 0;
   ultimo = 0;
   estrutura = new TipoItem[max_itens];
} 

Fila::~Fila()
{
    delete [] estrutura;
} 

bool Fila::estaCheio()
{
    return (ultimo - primeiro == max_itens);
}

bool Fila::estaVazio()
{
    return (ultimo == primeiro);
}

void Fila::inserir(TipoItem item)
{
    if(estaCheio()){
        cout << "A fila esta cheia!\n";
    } else{
        estrutura[ultimo % max_itens] = item; //recebe item
        ultimo++;
    }
}

TipoItem Fila::remover()
{
    if(estaVazio()){
        cout << "A fila esta vazia!\n";
        return 0;
    } else{
        primeiro++;
        return estrutura[(primeiro-1) % max_itens];
    }
}   

void Fila::imprimir()
{
    cout << "Fila: " " [ ";
    for(int i=primeiro; i<ultimo; i++){
        cout << estrutura[i % max_itens] << " ";
    }

    cout << " ] \n";
}

