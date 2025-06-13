//principal

#include <iostream>
#include "fila.h"

using namespace std;

int main(){
    Fila fila1; //objeto fila1 que eu disse que ele é da classe fila
    int opcao;  
    TipoItem item;

    cout << "Programa gerador de filas:\n";

    do{
        cout << "Digite 0 para parar o programa\n";
        cout << "Digite 1 para inserir um elemento\n";
        cout << "Digite 2 para remover um elemento\n";
        cout << "Digite 3 para imprimir a fila\n";
        cin >> opcao; //oq digitar vai para opcao

        if(opcao == 1){
            cout << "Digite o elemento a ser inserido na fila: \n";
            cin >> item; //oq digitar vai para item
            fila1.inserir(item); //entrada

        } else if(opcao ==2){
            item = fila1.remover(); //saida
            cout << "Elemento removido: " << item << endl;

        } else if(opcao ==3){
            fila1.imprimir();
        }



    } while (opcao !=0);


    return 0;
}