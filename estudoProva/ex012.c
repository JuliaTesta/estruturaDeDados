//Estrutura
#include <stdio.h>

typedef struct retangulo
{
    float altura, largura;
} retangulo;

void lerRetangulo(retangulo r[], int tamanho){
    
    for(int i=0; i<tamanho; i++){
        printf("Retangulo %d\n", i+1);
        printf("Altura(m): ");
        scanf("%f", &r[i].altura);
        printf("Largura(m): ");
        scanf("%f", &r[i].largura);
    }
}

float calcularArea(retangulo r[], int tamanho){
    float maiorArea = 0;

    for(int i=0; i<tamanho; i++){
        float area = r[i].altura * r[i].largura;

        printf("Area do retangulo: %.2f \n", area);

        if(area > maiorArea){
            maiorArea = area;
        }
    }
    return maiorArea;
}

int main(){
    retangulo r[2];

    lerRetangulo(r,2);
    printf("A maior area eh: %.2f", calcularArea(r,2));
}
