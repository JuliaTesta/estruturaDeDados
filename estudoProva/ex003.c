//Soma dos 100 pares

#include <stdio.h>

int soma(int n){
    if(n == 0){
        return 0;
    } else {
        return  2*n + soma(n-1);       //2+4+6 = 2*1+2*2+2*3
    }
}

int main(){
    printf("A soma dos 100 primeiros numeros pares eh: %d", soma(100));
    return 0;
}