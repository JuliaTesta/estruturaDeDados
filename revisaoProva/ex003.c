#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(){
    int i=0, numero; 
    bool decrescente = true;
    int anterior = INT_MAX;

    while(i<20){
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if(i==0){
            anterior = numero;
        } else {
            if(numero<anterior){
                anterior = numero;
            } else {
                decrescente = false;
                anterior = numero;
            }
        }
        i+=1;
    }
    if(decrescente==true){
        printf("Numeros estao em ordem decrescente.\n");
    } else {
        printf("Numeros nao estao em ordem decrescente.\n");
    }
}






