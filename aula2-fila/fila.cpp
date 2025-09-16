//classe onde esta oq cada funcao faz

#include <iostream>
#include "fila.h"

using namespace std;

Fila::Fila()
{
   primeiro = 0;
   ultimo = 0;
   estrutura = new TipoItem[max_itens]; //Array TipoItem com tamanho max_itens onde os itens da fila serão realmente armazenados
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
    if(estaCheio()){ //só tem entrada, não retorna nada
        cout << "A fila esta cheia!\n";
    } else{
        estrutura[ultimo % max_itens] = item; //recebe item
        ultimo++; //elementos sao inseridos na ultima posicao
    } //faz a divisao pois o ultimo ja pode ter passado do tamanho da fila
}

TipoItem Fila::remover() //só tem saída
{
    if(estaVazio()){
        cout << "A fila esta vazia!\n";
        return 0;
    } else{
        primeiro++; //indica o indice do proximo elemento a ser removido
        return estrutura[(primeiro-1) % max_itens];
    }
}   //faz a divisao pois o primeiro já pode ter passado do tamanho da fila

void Fila::imprimir()
{
    cout << "Fila: " " [ ";
    for(int i=primeiro; i<ultimo; i++){
        cout << estrutura[i % max_itens] << " ";
    } //ultimo aponta para onde o item sera inserido, por isso nao pode ser igual a ele.
    //i ja pode ter passado do tamanho da fila, entao por isso faz a divisao
    cout << " ] \n";
}

