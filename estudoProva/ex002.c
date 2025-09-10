#include <stdio.h>

//Somatório

int somatorio(int n){
    if(n==1){
        return 1;
    } else {
        return n + somatorio(n-1);
    }
}

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Somatorio: %d", somatorio(numero));
    return 0;
}