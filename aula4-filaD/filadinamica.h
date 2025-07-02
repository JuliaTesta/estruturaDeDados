//Onde defino as funções 

typedef int TipoItem;

struct No
{
    TipoItem valor;
    No* proximo; 
};

class filadinamica{

    private: 
    No* primeiro; //ponteiro que aponta para o primeiro da fila
    No* ultimo; //ponteiro que aponta para o ultimo da fila


    public:
    filadinamica(); //construtor
    ~filadinamica(); //destrutor
    bool estaCheio();
    bool estaVazio();
    void inserir(TipoItem item);
    TipoItem remover();
    void imprimir();
};
