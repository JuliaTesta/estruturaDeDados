
int somaPares(int n){
    if(n == 0){
        return 0;
    } else {
        return 2*n + somaPares(n-1); //2*1 + 2*2 + 2*3 + 2*4...
    }  
}

int main(){    

    printf("Soma dos 100 primeiros numeros pares: ");
    printf("%d", somaPares(100));
}