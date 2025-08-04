// principal

#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    pilha pilha1; //criei um objeto da classe pilha
    TipoItem item; 
    int opcao; 
    cout << "Programa gerador de pilhas.\n";

    do {
        cout << "Digite 0 para parar o programa.\n";
        cout << "Digite 1 para inserir um elemento.\n";
        cout << "Digite 2 para remover um elemento.\n";
        cout << "Digite 3 para imprimir a pilha.\n";
        cout << "Digite 4 para verificar se a pilha é palíndromo.\n";
        cin >> opcao; //oq digitar vai para variavel opcao

        if(opcao == 1){
            cout << "Digite o elemento a ser inserido:\n";
            cin >> item;
            pilha1.inserir(item);
        }
        else if(opcao == 2){ //nao tem cin pq necessariamente o ultimo colocado vai ser removido.   
            item = pilha1.remover();
            cout << "Elemento removido: " << item << endl;
        }
        else if(opcao == 3){
            pilha1.imprimir();

        } else if(opcao == 4){
            if(pilha1.estaVazia()){
                cout << "A pilha esta vazia. Insira alguns elementos.\n";
            } else {
                
                pilha original = pilha1.clonar();
                pilha auxiliar = pilha1.clonar();
                TipoItem item;
                int qnt = original.qualTamanho();

                //pilha invertida
                pilha invertida;
                for(int i=0; i<qnt; i++){
                   invertida.inserir(auxiliar.remover()); //inserir na invertida o que removi da original (invertendo a auxiliar)
                } 

                bool ehPalindromo = true;
                while(!original.estaVazia()){
                    if(original.remover() != invertida.remover()){
                        ehPalindromo =false;
                        break;
                    }
                }

                if(ehPalindromo){
                    cout <<" eh palindromo";

                }else{
                    cout << "nao eh palindromo";
                }
            }
        }
    } while(opcao != 0);

    return 0;
}