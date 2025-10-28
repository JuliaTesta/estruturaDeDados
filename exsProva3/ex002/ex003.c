int main(){
    int a = 2;
    duplicar(&a);
    printf("Valor duplicado: %d", a);
}

int duplicar(int *a){
    *a = *a * *a;
}