//Imprimir Decrescente n a 1 

#include <stdio.h>

void decrescente(int n){
    if(n==1){
        printf("1");
    } else {
        printf("%d", n);
        decrescente(n-1);
    }
}

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    decrescente(numero);
    return 0;
}