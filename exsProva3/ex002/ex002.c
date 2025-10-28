int main(){
    int a = 9;
    int b=7;

    zerar(&a,&b);
    printf("Valores zerados: %d e %d\n", a,b);
}

int zerar(int *a, int *b){
    *a = 0;
    *b = 0;
}