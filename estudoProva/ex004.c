//Imprimir Decrescente n a 1 

#include <stdio.h>

int imprimirDecrescente(int n){
    if(n == 1){
        printf("1 ");
        return;
    } else {
        printf("%d ", n);
        imprimirDecrescente(n-1);
        return;
    }
}

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

     imprimirDecrescente(numero);

    return 0;
}