//somatorio de n 
#include <stdio.h>

int somatorio(int n){
    if(n == 1){
        return 1;
    } else {
        return n + somatorio(n-1);
    }
}

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

   printf("O somatorio de %d eh: %d", numero, somatorio(numero));
}