//O que cada função vai fazer

#include "aluno.h"

Aluno::Aluno(){ //quando nao tem nenhuma entrada
    ra=-1; //para mostrar que o espaço esta vazio 
    nome = " ";
}

Aluno::Aluno(int r, string n){
    ra = r; //r que foi informado
    nome = n; //n que foi informado
}

int Aluno::obterRa(){
    return(ra);
}

string Aluno::obterNome(){
    return (nome);
}