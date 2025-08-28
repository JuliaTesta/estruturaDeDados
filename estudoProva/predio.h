//Contantes
#define ANDARES 20
#define UNIDADES 8

//Biblioteca
#include <string.h>

//Estrutura
typedef struct 
{
    char nome[50];
    int moradores;
    int alugado;
    int inadimplente;
} Apartamento;

//Protótipo Funções
void inicializar(Apartamento predio[ANDARES][UNIDADES]);
void alterarApto(int andar, int unidade, Apartamento predio[][UNIDADES], int moradores, char nome[50], int alugado, int inadimplente);
void consutlarApto(int andar,int unidade,Apartamento predio[ANDARES][UNIDADES]);
void imprimirCadaApto(Apartamento predio[ANDARES][UNIDADES]);
void imprimirTotalPredio(Apartamento predio[ANDARES][UNIDADES]);
void imprimirCadaAndar(Apartamento predio[ANDARES][UNIDADES]);
void vazios(Apartamento predio[ANDARES][UNIDADES]);
void maisMoradores(Apartamento predio[ANDARES][UNIDADES]);
int unidadesInadimplentes(Apartamento predio[ANDARES][UNIDADES]);
void exibirInadimplencia(Apartamento predio[ANDARES][UNIDADES]);
