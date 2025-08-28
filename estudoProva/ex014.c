#include <stdio.h>

typedef struct
{
   char nome[50], marca[50];
   float preco;
}produto;

produto lerDados(){
    produto p;
    for(int i=0; i<10; i++){
        printf("Digite o nome do produto: ");
        scanf("%s", p.nome);
        printf("Digite a marca do produto: ");
        scanf("%s", p.marca);
        printf("Digite o preco do produto: ");
        scanf("%f", &p.preco);
    }
    return p;
}

void imprimirDados(produto p){
    for(int i=0; i<10; i++){
        printf("Produto %d: \n", i+1);
        printf("Nome - %s\n", p.nome);
        printf("Marca - %s\n", p.marca);
        printf("Preco - %.2f\n", p.preco);
    }
}

int main(){
    produto p;
    p = lerDados();
    imprimirDados(p);
    return 0;
}