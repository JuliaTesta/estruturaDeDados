//Colocar o que cada função da classe faz
#include <iostream> //pq vai ter uma função de saída
#include "pilha.h"

using namespace std;

    pilha::pilha()  //função construtora tem o mesmo nome da classe
    {
        tamanho = 0; 
        estrutura = new TipoItem[max_itens]; //Ei computador, crie um armário com max_itens (100) prateleiras e cole essa minha etiqueta estrutura nesse armário
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
    TipoItem pilha::remover() //tem entrada e nao tem saida
    {
        if(estaVazia()){
            cout<< "A pilha esta vazia!\n";
            cout<< "Nao tem elemento para ser removido.\n";
            return 0;
        }
        else{
            tamanho--;
            return estrutura[tamanho]; //tamanho é o proximo item que vai receber, topo= tamanho -1
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