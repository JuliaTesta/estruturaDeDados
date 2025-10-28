#define TAM_MAX 5

typedef struct fila {
	int vetor[TAM_MAX];
	int final;
} Fila;

void inicializar(Fila *f);
int verificarVazia(Fila f);
int verificarCheia(Fila f);
void inserir(int numero, Fila *f);
void imprimir(Fila f);
int remover(Fila *f);

//Funcoes para testes automatizados
void testar1_VaziaFila();
void testar2_InserirFila(int quant);
void testar3_RemoverFila();
void testar4_RemoverFila(int quant);

