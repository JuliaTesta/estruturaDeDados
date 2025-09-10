#include <stdio.h>
#include <string.h>

typedef struct 
{
    char nome[50], marca[50];
    float preco;

}produto;


produto lerProduto(){
    produto p;
    printf("Digite o nome do produto: ");
    scanf("%s", p.nome);
    printf("Digite a marca do produto: ");
    scanf("%s", p.marca);
    printf("Digite o preco do produto: ");
    scanf("%f", &p.preco);

    return p;
}

void encherPrateleira(produto prateleira[], int quant){
    for(int i=0; i<quant; i++){
        prateleira[i] = lerProduto();
    }
}

void imprimirProduto(produto p){
    printf("\nNome:%s \t Marca:%s \t Preco:%.2f \n", p.nome, p.marca, p.preco);
}

void imprimirPrateleira(produto prateleira[], int quant){
    for(int i=0; i< quant; i++){
        imprimirProduto(prateleira[i]);
    }
}

int main(){
    produto prateleira[10];
    int quant;

    printf("Digite a quantidade de produtos:");
    scanf("%d", &quant);

    encherPrateleira(prateleira, quant);
    imprimirPrateleira(prateleira,quant);
    return 0;
}