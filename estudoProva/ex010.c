//Estrutura
#include <stdio.h>
#include <string.h>

struct processo
{
    int numero;
    char data[20];
    char nomeSolicitante[50];
    char nomeAdv[50];
};

struct processo leitura(){ //quero retornar uma estrutura
    struct processo p;

    printf("Digite o numero do processo: ");
    scanf("%d", &p.numero);
    printf("Digite a data de abertura do processo: ");
    scanf("%s", p.data);
    printf("Digite o nome do solicitante: ");
    scanf("%s", p.nomeSolicitante);
    printf("Digite o nome do advogado: ");
    scanf("%s", p.nomeAdv);

    return p;
}

void imprimir(struct processo p){
    printf("O processo %d, aberto em %s, tem como solicitante %s representado por %s", p.numero, p.data, p.nomeSolicitante, p.nomeAdv);
}

int main(){
    struct processo p;
   
    p = leitura();
    imprimir(p);

    return 0;
}
