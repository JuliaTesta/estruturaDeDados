#include <stdio.h>
#include <math.h>

typedef struct ponto
{
    float x,y;
} ponto;

ponto lerUmPonto(){
    ponto p;

    scanf("%f %f",&p.x, &p.y);

    return p;
}

float calcDistanciaPontos(ponto p1, ponto p2){
    float distancia = sqrt((p2.x - p1.x)*(p2.x - p1.x)+ (p2.y - p1.y)*(p2.y - p1.y));
    return distancia;
}

int main(){
    ponto ponto1, ponto2;
    
    printf("Digite o primeiro ponto: ");
    ponto1 = lerUmPonto();

    printf("Digite o segundo ponto: ");
    ponto2 = lerUmPonto();

    printf("A distancia entre os dois pontos eh: %.2f", calcDistanciaPontos(ponto1,ponto2));

    return 0;
}
