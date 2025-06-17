//oq cada função faz
 #include <iostream>
 #include "pilhadinamica.h"
 #include <cstddef> //NULL (começar falando que o topo é nulo)

 using namespace std;

    pilhadinamica :: pilhadinamica()
    {
        NoTopo = NULL; //ainda nao tem ninguem
    }

    pilhadinamica :: ~pilhadinamica()
    {

    }

    bool pilhadinamica :: estavazio()
    {
        return (NoTopo==NULL);
    }

    bool pilhadinamica ::estacheio()
    {
        No* NoNovo;
        try{
            NoNovo = new No; //consegue criar um novo nó?
            delete NoNovo; //deleto pq ainda não vou inserir, entao libero espaço de memória
            return false; //significa que consegui fazer oq está acima (falso que esta cheio)
        } catch(bad_alloc exception){
            return true;
        }
    }

    void pilhadinamica :: inserir(TipoItem item)
    {
        if(estacheio()){
            cout << "A pilha está cheia!\n";
        } else {
            No* NoNovo = new No; //ponteiro aponta para No, que é o tipo do objeto (mas apenas seu endereço), por isso é necessario criar um new. 
            NoNovo -> valor = item;
            NoNovo -> proximo = NoTopo;
            NoTopo = NoNovo;
        }
    }

    TipoItem pilhadinamica ::retirar()
    {
        if(estavazio()){
            cout << "A pilha esta vazia!\n";
            return 0;
        } else{
            No* Notemp;
            Notemp = NoTopo; //temp recebe o endereço de noTopo
            TipoItem item = NoTopo -> valor; //item recebe o valor de nó topo
            NoTopo = NoTopo -> proximo; 
            delete Notemp;
            return item; //NAO ENTENDIIIIIIII
        }
    }

    void pilhadinamica ::imprimir()
    {
        No* NoTemp = NoTopo;
        cout << "Pilha: [";
        while(NoTemp != NULL){
            cout << NoTemp -> valor << " ";
            cout << NoTemp ->proximo;
        }
        cout << "]\n";
    }