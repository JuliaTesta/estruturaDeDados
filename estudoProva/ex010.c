//Estrutura
#include <stdio.h>
#include <string.h>

 typedef struct 
{
    int numero;
    char data[20];
    char nomeSolicitante[20];
    char nomeAdv[20];
} processo;


processo leitura(){
    processo p;

    printf("Digite o numero do processo: ");
    scanf("%d", &p.numero);
    printf("Digite a data do processo: ");
    scanf("%s", p.data);
    printf("Digite o nome do solicitante: ");
    scanf("%s", p.nomeSolicitante);
    printf("Digite o nome do advogado: ");
    scanf("%s", p.nomeAdv);

    return p;
}

void imprimir(processo p){
        printf("O processo %d, aberto em %s, tem como solicitante %s representado por %s.\n", p.numero, p.data, p.nomeSolicitante, p.nomeAdv);
}

int main(){
    processo p;

    p = leitura();
    imprimir(p);

    return 0;
}
