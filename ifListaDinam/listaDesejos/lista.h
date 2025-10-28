#define TAM_MAX 11

typedef struct _itemDesejo {
	char item[50];
	int quantidade;
} itemDesejo;

typedef struct _Lista {
    itemDesejo vetor[TAM_MAX];
    int fim;
} Lista;

void inicializar(Lista *l);
int verificarVazia(Lista l);
int verificarCheia(Lista l);
void inserir(itemDesejo dado, int posicao, Lista *l);
void imprimir(Lista l);
itemDesejo remover(int posicao, Lista *l);

