#define TAM_MAX 5 

typedef struct _pilha {
    int vetor[TAM_MAX];
    int topo;
} pilha;

void inicializar(pilha *p);
int verificarVazia(pilha p);
int verificarCheia(pilha p);
void push(int dado, pilha *p);
void imprimir(pilha p);
int pop(pilha *p);
