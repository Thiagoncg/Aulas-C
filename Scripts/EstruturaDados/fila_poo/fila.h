typedef int TipoItem;
const int max_itens = 5;

class fila{
    private:
    int primeiro, ultimo;
    TipoItem* estrutura;

    public:
    fila();
    ~fila();
    bool isVazia();
    bool isCheia();
    void inserir(TipoItem item);
    TipoItem remover();
    void imprimir();

};