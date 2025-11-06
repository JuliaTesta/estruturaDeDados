#include <stdio.h>
#include <string.h>

void zerar(int *a, int *b){
    *a = 0;
    *b = 0;
}

int main(){
    int a = 5;
    int b = 9;

    zerar(&a,&b);
    printf("%d e %d", a,b);

    return 0;
}

