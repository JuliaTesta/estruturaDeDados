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
        No* Notemp;
        while(NoTopo!=NULL){
            Notemp = NoTopo; //sao o mesmo item, mas precisa do temp para saber o enderço do proximo 
            NoTopo = NoTopo -> proximo;
            delete Notemp;
        }
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
            NoNovo -> valor = item; //valor do nó novo recebe item
            NoNovo -> proximo = NoTopo; //nó novo é o nó do topo
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
            TipoItem item = NoTopo -> valor; //salva o valor do topo em item
            NoTopo = NoTopo -> proximo; //agora NoTopo esta no proximo
            delete Notemp; //posso apagar o antigo NoTopo
            return item; //Imagina que você quer armazenar os itens removidos para fazer outra coisa depois. Sem o return, você perderia esses valores
        }
    }

    void pilhadinamica ::imprimir()
    {
        No* NoTemp = NoTopo;
        cout << "Pilha: [";
        while(NoTemp != NULL){
            cout << NoTemp -> valor << " "; //usa notemp para nao mecher no ponteiro original. pq o noTopo permite que eu acesse todos os outro, se ele passar para o proximo perco o acesso de tudo.
            NoTemp = NoTemp ->proximo;
        }
        cout << "]\n";
    }