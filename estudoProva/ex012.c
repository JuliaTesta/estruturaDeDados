#include <stdio.h>

typedef struct 
{
    float altura, largura, area;
}retangulo;

void lerRetangulo(retangulo r[], int tamanho){
    
    for(int i=0; i<tamanho; i++){
        printf("Altura %d:",i+1);
        scanf("%f", &r[i].altura);

        printf("Largura %d: ", i+1);
        scanf("%f", &r[i].largura);
    }
}

float calcularArea(retangulo r[], int tamanho){
    float maiorArea = 0;

    for(int i=0; i<tamanho; i++){
        float area = r[i].altura * r[i].largura;

        printf("Area do retangulo: %.2f", area);

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
    return 0;
}
