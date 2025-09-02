#define qtdAndares 20
#define qtdUnidades 8

typedef struct 
{
    char nomeMorador[50];
    int moradores;
    char alugado;
    int inadimplencia;

} Apartamento;


void inicializarPredio(Apartamento predio[][qtdUnidades]);
void alterarInformacoesApartamento(int andar, int unidade, Apartamento predio[][qtdUnidades], Apartamento ap);
void exibirDadosUnidade(int andar, int unidade, Apartamento predio[][qtdUnidades], Apartamento ap) ;
void exibirMoradores(Apartamento predio[][qtdUnidades]);
int calcularTotalMoradores(Apartamento predio[][qtdUnidades]);
void exibirTotalMoradoresPorAndar(Apartamento predio[][qtdUnidades]);
void exibirApartamentosVazios(Apartamento predio[][qtdUnidades]);
void exibirUnidadeMaiorMoradores(Apartamento predio[][qtdUnidades]);
int contarInadimplente(Apartamento predio[][qtdUnidades]);
int exibitInadimplencia(Apartamento predio[][qtdUnidades]);
