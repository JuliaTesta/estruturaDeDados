#include <stdio.h>

typedef struct atividades
{
    char nome[50];
   float nota1,nota2,nota3,nota4;
   float media;
} atividades;

int main(){
    atividades aluno[3];

    for(int i=0; i<3; i++){
        printf("Nome do aluno %d: ",i+1);
        scanf("%s", aluno[i].nome);
        printf("Nota 1: ");
        scanf("%f", &aluno[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &aluno[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &aluno[i].nota3);
        printf("Nota 4: ");
        scanf("%f", &aluno[i].nota4);

        aluno[1].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3 + aluno[i].nota4)/4;
    }

    for(int i=0; i<3; i++){
        printf("O aluno %s, com notas: \n", aluno[i].nome);
        printf("Atividade 1               %.2f\n", aluno[i].nota1);
        printf("Atividade 2               %.2f\n", aluno[i].nota2);
        printf("Atividade 3               %.2f\n", aluno[i].nota3);
        printf("Atividade 4               %.2f\n", aluno[i].nota4);
        printf("e resutado %.2f\n\n", aluno[i].media);
    }
}

