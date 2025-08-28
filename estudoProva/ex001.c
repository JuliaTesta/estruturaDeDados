#include <stdio.h>
//int func(int a) {  

//if ( a <= 0 )    

//return 1;  

//else return a * func(a-1);}

//Escreva uma função não-recursiva que resolve o mesmo problema.

int func(int a){
    int resultado =1;
    for(int i=1; i<=a; i++){
        resultado *= i;
    }
    return resultado;
}

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("%d", func(numero));
    return 0;
}