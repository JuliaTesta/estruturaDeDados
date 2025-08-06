// principal
#include <string>
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
        cout << "Digite 5 para inverter a pilha.\n";
        cout << "Digite 6 para remover as ocorrencias de um elemento,\n";
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

        } else if(opcao == 4){ //EX1- É PALÍNDROMO?
            if(pilha1.estaVazia()){
                cout << "A pilha está vazia. Insira alguns elementos.\n";
            } else {
                pilha original = pilha1.clonar();
                pilha auxiliar = pilha1.clonar();
                TipoItem item;
                int qnt = pilha1.qualTamanho();

                //Pilha invertida
                pilha invertida;
                while(!auxiliar.estaVazia()){
                    invertida.inserir(auxiliar.remover());
                }
                bool ehPalindromo = true;
                while(!original.estaVazia()){
                    if(original.remover() != invertida.remover()){
                        ehPalindromo = false;
                        break;
                    }  
                }

                if(ehPalindromo){
                    cout << "Eh palindromo.\n";
                } else {
                    cout << "Nao eh palindromo.\n";
                }
            }

        } else if(opcao == 5){ //EX2- Pilha1 deve ser invertida
            pilha aux1, aux2;
            if(pilha1.estaVazia()){
                cout << "A pilha esta vazia. Insira alguns elementos.\n";
            }

            while(!pilha1.estaVazia()){
                aux1.inserir(pilha1.remover());
            }
            while(!aux1.estaVazia()){
                aux2.inserir(aux1.remover());
            }
            while(!aux2.estaVazia()){
                pilha1.inserir(aux2.remover());
            }
            cout << "Pilha invertida com sucesso.\n";

        } else if(opcao == 6){ //EX3- Remover todas as ocorrências de um elemento da pilha
            if(pilha1.estaVazia()){
                cout << "A pilha esta vazia. Nao eh possivel remover.\n";
            } else {
                cout << "Digite o elemento a ser removido:\n";
                cin >> item;

                pilha aux;
                while (!pilha1.estaVazia()){
                    TipoItem atual = pilha1.remover();
                    if(atual != item){
                        aux.inserir(atual);
                    }
                }

                while(!aux.estaVazia()){
                    pilha1.inserir(aux.remover());
                }
                cout << "Todas as ocorrencias do elemento foram removidas.\n";
            }

        } else if (opcao == 7){ //EX4- Parenteses Balanceados
            cout << "Digite uma expressao com parenteses (exemplo: ((()))): \n";
            string expressao;
            cin >> expressao;

            if(estaBalanceado(expressao)){
                cout << "Expressao Balanceada.\n";
            } else {
                cout << "Expressao NAO balanceada.\n";
            }
            
            
        }
    } while(opcao != 0);

    return 0;
}

//EX4-
bool estaBalanceado(string expr){
    int tamanho = (int)expr.size();
    pilha p;

    for(int i=0; i<tamanho; i++){
        char c = expr[i];
        if(c == '('){
            p.inserir(1);
        } else if( c== ')'){
            if(p.estaVazia()){
                return false; //pq se achou ")" e a pilha esta vazia, é pq nao teve nenhum ')'
            }
            p.remover(); //remove um '1'. fica um empilha e desempilha. 
        } 
    }
    return p.estaVazia(); //quando ela termina vazia, significa que esta balanceada
}