//O que cada função faz

#include <iostream>
#include "hash.h"

using namespace std;

int Hash::FuncaoHash(Aluno aluno){
    return (aluno.obterRa() % max_posicoes); //para saber a posição que está (resto)
}

Hash::Hash(int tam_vetor, int max){
    quant_itens = 0;
    max_itens =  max;      //deixar para o usuario escolher
    max_posicoes =  tam_vetor;      //deixar para o usuario escolher
    estrutura = new Aluno[tam_vetor]; //a estrutura tera elementos do tam_vetor (ex: tres posicoes do tipo aluno)
}

Hash::~Hash(){
    delete [] estrutura;
}

bool  Hash::estaCheio(){
    return (quant_itens == max_itens);
}

int  Hash::obterTamanhoAtual(){
    return (quant_itens);
}

//SEM COLISÕES
void  Hash::inserir(Aluno aluno){
    int local = FuncaoHash(aluno); //dar como entrada aluno na função hash, e transformá-lo em inteiro
    estrutura[local] = aluno;
    quant_itens++;
}

void  Hash::deletar(Aluno aluno){
    int local = FuncaoHash(aluno);
    if(estrutura[local].obterRa() != -1){  //se o ra daquele local não é -1 já tem um elemento inserido ali, então podemos excluí-lo
        estrutura[local] = Aluno(-1, " "); //aluno vazio(removido)
        quant_itens--;
    }
}

void  Hash::buscar(Aluno& aluno, bool& busca) {
    int local = FuncaoHash(aluno); //'aluno' é o que deu como entrada, ja o aux é oq ta na tabela
    Aluno aux = estrutura[local];
    if(aluno.obterRa() != aux.obterRa()){
        busca = false;
    } else {
        busca = true;
        aluno = aux;
    }
}

void  Hash::imprimir(){
    cout << " Tabela Hash: \n";
    for(int i=0; i<max_posicoes; i++){
        if(estrutura[i].obterRa() != -1){ //imprime apenas se tiver algum elemento na posição
            cout << i << ":" << estrutura[i].obterRa();
            cout << estrutura[i].obterNome() << endl;
        }
    }
}