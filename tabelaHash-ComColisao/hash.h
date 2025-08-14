//Quais funções vão ter

#include "aluno.h"
#include <iostream>

class Hash{
    private:
    int FuncaoHash(Aluno aluno); //dar como entrada um objeto aluno da classe Aluno
    int max_itens; //tem que ter menos itens do que posicoes 
    int max_posicoes; //posicoes maximas que tem no vetor
    int quant_itens; //quantos itens ja foram colocados no vetor
    Aluno* estrutura; //estrutura vai ser um vetor onde irá guardar a hash. nesse vetor tem elementos da classe aluno

    public:
    Hash(int tam_vetor, int max);
    ~Hash();
    bool estaCheio();
    int obterTamanhoAtual();
    void inserir(Aluno aluno);
    void deletar(Aluno aluno);
    void buscar(Aluno& aluno, bool& busca); //aluno&= aluno por referencia... Isso porque eu só vou entrar com o ra, e caso encontre o aluno, traz o nome dele tbm (por referencia). 
    void imprimir();
};