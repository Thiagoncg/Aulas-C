#include<iostream>
#include<list>
using namespace std;

// Classe para representar um grafo
class Grafo {
    int V; // Número de vértices
    list<int> *adj; // Ponteiro para um array contendo listas de adjacências

public:
    Grafo(int V); // Construtor
    void adicionarAresta(int v, int w); // função para adicionar uma aresta ao grafo
    void DFS(int v); // DFS traversal of the vertices reachable from v
};

Grafo::Grafo(int V) {
    this->V = V;
    adj = new list<int>[V];
}

void Grafo::adicionarAresta(int v, int w) {
    adj[v].push_back(w); // Adiciona w à lista de v
}

void Grafo::DFS(int v) {
    // Cria um array de visitados e marca todos os vértices como não visitados
    bool *visitado = new bool[V];
    for (int i = 0; i < V; i++)
        visitado[i] = false;

    // Cria uma pilha para DFS
    list<int> pilha;
    // Marca o nó atual como visitado e o coloca na pilha
    visitado[v] = true;
    pilha.push_back(v);

    // 'i' será usado para obter todos os vértices adjacentes de um vértice
    list<int>::iterator i;

    while(!pilha.empty()) {
        // Desempilha um vértice da pilha e imprime
        v = pilha.back();
        cout << v << " ";
        pilha.pop_back();

        // Obtém todos os vértices adjacentes do vértice desempilhado
        // Se um adjacente não foi visitado, então o marca como visitado e o empilha
        for(i = adj[v].begin(); i != adj[v].end(); ++i) {
            if (!visitado[*i]) {
                pilha.push_back(*i);
                visitado[*i] = true;
            }
        }
    }
}
int main() {
    Grafo g(70); // Cria um grafo com 5 vértices

    g.adicionarAresta(0, 1);
    g.adicionarAresta(1, 2);
    g.adicionarAresta(2, 3);
    g.adicionarAresta(3, 4);

    cout << "Busca em Profundidade (partindo do vértice 2): ";
    g.DFS(0);

    return 0;
}


