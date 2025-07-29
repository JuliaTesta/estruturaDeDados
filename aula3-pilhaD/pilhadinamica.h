//onde esta as funcoes
typedef int TipoItem;

//struct é igual class, a diferença é que nele tudo é publico
struct No { //cada nó guarda o valor e o endereço pro próximo

    TipoItem valor; 
    No* proximo; //ponteiro para um outro nó
};

class pilhadinamica{    
    private:
    No* NoTopo; // ponteiro para o nó que está no topo. assim consigo acessar todos os outros nós

    public:
    pilhadinamica();
    ~pilhadinamica();
    bool estacheio();
    bool estavazio();
    void inserir(TipoItem item);
    TipoItem retirar();
    void imprimir();

};