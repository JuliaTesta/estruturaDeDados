#include <stdio.h>
#include <math.h>

typedef struct 
{
    float x,y;
}ponto;

ponto lerPonto(){
    ponto p;
    scanf("%f %f", &p.x, &p.y);
    return p;
}

calcDistancia(ponto p1, ponto p2){
    float distancia = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
    return distancia;
}

int main(){
    ponto ponto1, ponto2;

    printf("Digite o primeiro ponto: ");
    ponto1 = lerPonto();

    printf("Digite o segundo ponto: ");
    ponto2 = lerPonto();

    printf("A distancia entre os dois pontos eh: %.2f", calcDistancia(ponto1,ponto2));
    return 0;
}
