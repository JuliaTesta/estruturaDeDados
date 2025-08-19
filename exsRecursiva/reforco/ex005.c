//soma dos 100 primeiros numeros pares
#include <stdio.h>

int somaPares(int n){
    if(n == 0){
        return 0;
    } else {
        return 2*n + somaPares(n-1);          //2+4+6... = 2*1+ 2*2 + 2*3...
    }
}

int main(){
    printf("A soma dos 100 primeiros numeros pares eh: %d", somaPares(100));
}