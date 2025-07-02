#include <iostream>
#include <new>
#include <cstddef>
#include "filadinamica.h"

using namespace std;

    filadinamica::filadinamica()
    {
        primeiro = NULL;
        ultimo = NULL;
    }

    filadinamica::~filadinamica()
    {
        No* temp;
        while(primeiro != NULL ){
            temp = primeiro; //temp aponta para o mesmo lugar que o primeiro
            primeiro = primeiro -> proximo; //primeiro vai para o proximo
            delete temp;
        } 
        ultimo = NULL;
    }

    bool  filadinamica::estaCheio()
    {
        No* temp;
        try{
            temp = new No; //tentar pegar um espaço da memoria para guardar um nó
            delete temp; //já descobri que tem espaço, agora preciso desalocar esse temp
            return false; //nao esta cheio
        } catch(bad_alloc exception){
             return true;
        }
    }

    bool  filadinamica::estaVazio()
    {
        return (primeiro == NULL);
    }

    void  filadinamica::inserir(TipoItem item)
    {
        if(estaCheio()){
            cout << "A fila está cheia!\n";
        } else{
            No* NoNovo = new No; //criando um ponteiro chamado NoNovo do tipo no, que vai apontar para o new no
            NoNovo->valor = item;
            NoNovo->proximo = NULL; //sempre o endereço que esta sendo inserido é NULL
            if(primeiro == NULL){ //significa que é o primeiro elemento que estou inserindo
                primeiro == NoNovo;
            } else{
                ultimo->proximo = NoNovo; //o proximo do ultimo é o noNovo
            }

            ultimo = NoNovo;
        }
    }

    TipoItem  filadinamica::remover()
    {
        if(estaVazio()){
            cout << "A fila está vazia!\n";
            return 0;
        } else{
            No* temp = primeiro; //temp mostra quem vai ser removido 
            TipoItem item = primeiro->valor;
            primeiro = primeiro->proximo; //primeiro passa a ser o próximo
            
            if(primeiro == NULL){ //quer dizer que não tinha próximo
                ultimo = NULL;
            }   
            delete temp;
            return item; //quero mostrar o valor removido 
        }
    }

    void  filadinamica::imprimir()
    {}