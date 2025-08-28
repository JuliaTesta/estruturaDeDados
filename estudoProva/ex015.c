#include <stdio.h>

typedef struct _produto {
    char nome[50], marca[50];
    float preco;
} produto;

void imprimirProduto(produto p) {
    printf("\nNome: %s \t Marca: %s \t Preco: %f",
        p.nome, p.marca, p.preco);
}

produto lerProduto() {
    produto p;
    printf("Digite o nome:");
    scanf("%s", &p.nome);
    printf("Digite a marca:");
    scanf("%s", &p.marca);
    printf("Digite o preco:");
    scanf("%f", &p.preco);
    return p;
}

void encherPrateleira(produto prateleira[], int quantidade) {
    for(int i =0; i<quantidade; i++)
        prateleira[i] = lerProduto(); //produz um valor
}

void imprimirPrateleira(produto prateleira[], int quantidade) {
    for(int i =0; i<quantidade; i++)
        imprimirProduto(prateleira[i]); //usa produto como entrada
}

int main () {
    int quant;
    produto prateleira[10];

    printf("Digite a quantidade de produtos:");    
    scanf("%d", &quant);

    encherPrateleira(prateleira, quant);
    imprimirPrateleira(prateleira, quant);
}
