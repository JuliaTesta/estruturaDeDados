    //imprimir numeros de 1 a n
   #include <stdio.h>

    int imprimirCrescente(int n){
        if(n == 1){
            printf("1 ");
            return;
        } else {
            imprimirCrescente(n-1);
            printf("%d ", n);
        }
    }


   int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    imprimirCrescente(numero);
   }