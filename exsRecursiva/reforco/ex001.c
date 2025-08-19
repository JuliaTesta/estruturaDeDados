    //Imprimir de n ate 1

    #include <stdio.h> 

    int imprimirDecrescente(int n){
        if(n == 1){
            printf("1 ");
            return;
        } else {
            printf("%d ", n);
            return imprimirDecrescente(n-1);
        }
    }

    int main(){
        int numero;

        printf("Digite um numero: ");
        scanf("%d", &numero);

       imprimirDecrescente(numero);
    }