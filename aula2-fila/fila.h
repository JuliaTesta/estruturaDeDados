///classe onde esta as caracteristicas da fila e oq ela faz

typedef int TipoItem;
const int max_itens = 100;

class Fila{
    private:
    int primeiro, ultimo;
    TipoItem* estrutura; //estrutura é um vetor que vai apontar para cada item que é do TipoItem


    public:
    Fila(); //construtora
    ~Fila(); //destrutora
    bool estaCheio();
    bool estaVazio();
    void inserir(TipoItem item);
    TipoItem remover();
    void imprimir();
    
};