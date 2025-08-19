
int func(int a){
    int resultado = 1;
    for(int i=1; i<=a; i++){
         resultado *= i;
    }
    return resultado;
 }
 
 int main(int a){
     printf("Digite um numero: ");
     scanf("%d", &a);
     printf("%d", func(a));
 }


 