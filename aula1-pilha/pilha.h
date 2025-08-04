//Definir a Classe (o que ela tem e o que pode fazer)

typedef int TipoItem; //da outro nome para um tipo já existente  (Se quiser mudar pra float é só mudar aqui)
const int max_itens = 100;

class pilha{

    private:
    int tamanho;
    TipoItem* estrutura; //ponteiro estrutura do tipo int
    
    public:
    pilha();  //função construtora tem o mesmo nome da classe
    ~pilha(); //função destrutora
    bool estaCheia(); //função que verifica se a pilha está cheia 
    bool estaVazia();
    void inserir(TipoItem item); //void pq nao tem saida, apenas entrada
    TipoItem remover(); //nao tem entrada e tem saida
    void imprimir();
    int qualTamanho();
    pilha clonar();
};