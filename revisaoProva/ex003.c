#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>


int main(){
    int i=0, numero;
    bool decrescente = true;
    int anterior = INT_MAX;

    while(i<20){
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if(i==0){
            anterior = numero;
        } else{
            if(numero<anterior){
                anterior = numero;
            } else {
                decrescente = false;
                anterior = numero;
            }
        }
        i+=1;
    }
    if(decrescente == true){
        printf("Numeros estao em ordem decrescente.\n");
    } else {
        printf("Numeros NAO estao em ordem decrescente.\n");
    }

    return 0;
}
