//Colocar o que cada função da classe faz
#include <iostream> //pq vai ter uma função de saída
#include "pilha.h"

using namespace std;

    pilha::pilha()  //função construtora tem o mesmo nome da classe
    {
        tamanho = 0; 
        estrutura = new TipoItem[max_itens]; //'estrutura' é um ponteiro que aponta para o endereço de cada item, ou seja, agora é possivel acessa-los. NEW permite criar vetores de forma dinamica
    }
    pilha::~pilha() //função destrutora
    {
        delete [] estrutura;
    }
    bool pilha::estaCheia() //função que verifica se a pilha está cheia 
    {
        return (tamanho == max_itens); //se for vdd, retorna true
    }
    bool pilha::estaVazia()
    {
        return (tamanho == 0);
    }
    void pilha::inserir(TipoItem item) //void pq nao tem saida, apenas entrada
    {
        if(estaCheia()){
            cout << "A pilha está cheia!\n";
            cout << "Não é possivel inserir este elemento.\n";
        }
        else{
            estrutura [tamanho] = item; //insere item na posição tamanho
            tamanho++;
        }
    }
    TipoItem pilha::remover() //só tem saida
    {
        if(estaVazia()){
            cout<< "A pilha esta vazia!\n";
            cout<< "Nao tem elemento para ser removido.\n";
            return 0;
        }
        else{
            tamanho--;
            return estrutura[tamanho]; //tamanho é o proximo item que vai receber, topo = tamanho -1
        }
    }
    void pilha::imprimir()
    {
        cout << "Pilha: [ ";
        for(int i=0; i<tamanho; i++){
            cout << estrutura[i] << " ";
        }
            cout << " ]\n";
    }
    int pilha::qualTamanho()    
    {
        return tamanho; 
    }

   pilha pilha::clonar(){
        pilha copia;
        for(int i=0; i<tamanho; i++){
            copia.estrutura[i] = estrutura[i];
        }
        copia.tamanho = tamanho;
        return copia;
   }


    
    