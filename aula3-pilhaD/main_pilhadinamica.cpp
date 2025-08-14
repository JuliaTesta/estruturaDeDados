#include <iostream>
#include "pilhadinamica.h"

using namespace std;

int main(){
    pilhadinamica pilha1;
    TipoItem item;
    int opcao;

    cout << "Programa gerador de pilha:\n";

    do{
        cout << "Digite 0 para encerrar o programa\n";
        cout << "Digite 1 para inserir um elemento\n";
        cout << "Digite 2 para remover um elemento\n";
        cout << "Digite 3 para imprimir a pilha\n";
        cout << "Digite 4 para inverter a pilha\n";
        cout << "Digite 5 para ver se eh palindromo\n";
        cout << "Digite 6 para remover elementos repetidos.\n";
        cin >> opcao;

        if(opcao ==1){
            cout << "Digite o elemento a ser inserido:\n";
            cin >> item;
            pilha1.inserir(item);
        } else if(opcao == 2){
           item = pilha1.retirar();
           cout << "Elemento removido: "  << item << endl;
        } else if(opcao ==3){
            pilha1.imprimir();
        } else if(opcao ==4 ){ //EX001 -INVERTER

           pilhadinamica aux1, aux2;

           if(pilha1.estavazio()){
            cout << "A pilha esta vazia. Nao eh possivel inverter.\n";
           } 
           while(!pilha1.estavazio()){
                aux1.inserir(pilha1.retirar());
           }
           while(!aux1.estavazio()){
                aux2.inserir(aux1.retirar());
           }
           while(!aux2.estavazio()){
                pilha1.inserir(aux2.retirar());
           }
           cout<< "Pilha invertida!\n";

        } else if(opcao ==5){ //EX2- eh palindromo
            if(pilha1.estavazio()){
                cout << "A pilha esta vazia. Insira alguns elementos.\n";
            } else {
                pilhadinamica original = pilha1.clonar();
                pilhadinamica auxiliar = pilha1.clonar();
                
                bool ehPalindromo = true;

                while(!original.estavazio()){
                    TipoItem itemOrig = original.retirar();
                    TipoItem itemAux = auxiliar.retirar();

                    auxiliar.inserir(itemAux); //invertendo a AUXILIAR 

                    if(itemOrig != itemAux){
                        ehPalindromo =false;
                        break;
                    }
                }

                if(ehPalindromo){
                    cout << "A pilha eh palindromo.\n";
                } else {
                    cout << "A pilha nao eh palindromo.\n";
                }
            }
        }else if(opcao ==6){ //EX3- REPETIDOS
            if(pilha1.estavazio()){
                cout << "A pilha esta vazia.\n";
            } else {
                cout << "Digite o elemento a ser removido: ";
                cin >> item;

                pilhadinamica aux;
                while(!pilha1.estavazio()){
                    TipoItem atual = pilha1.retirar();
                    if(atual != item){
                        aux.inserir(atual); //invertida
                    }
                    while(!aux.estavazio()){
                        pilha1.inserir(aux.retirar()); //nao esta mais invertida
                    }
                     cout << "Todas as ocorrencias do elemento foram removidas.\n";
                }
            }
        }

    } while (opcao != 0);

    return 0;
}