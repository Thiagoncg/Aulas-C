#include <iostream>
#include <vector>

#define MAX 10  // Define o tamanho máximo do labirinto.

using namespace std;

int labirinto[MAX][MAX];  // Matriz que representa o labirinto.
bool visitado[MAX][MAX];  // Matriz que rastreia quais células já foram visitadas.

// Função para verificar se uma célula é válida para visitar.
bool valido(int x, int y, int n, int m) {
    if(x < 0 || y < 0 || x >= n || y >= m) return false;  // Verifica se a célula está dentro dos limites do labirinto.
    if(visitado[x][y] || labirinto[x][y] == 1) return false;  // Verifica se a célula já foi visitada ou se é uma parede.

    return true;
}

// Função de busca em profundidade para encontrar o caminho.
void dfs(int x, int y, int n, int m) {
    static int dx[] = {-1, 0, 1, 0};  // Vetor de deslocamento no eixo x (cima, direita, baixo, esquerda).
    static int dy[] = {0, 1, 0, -1};  // Vetor de deslocamento no eixo y (cima, direita, baixo, esquerda).

    visitado[x][y] = true;  // Marca a célula atual como visitada.

    cout << "(" << x << ", " << y << ")" << endl;  // Imprime a célula atual.

    // Tenta mover-se em todas as direções a partir da célula atual.
    for(int i = 0; i < 4; i++) {
        if(valido(x + dx[i], y + dy[i], n, m)) {
            dfs(x + dx[i], y + dy[i], n, m);
        }
    }
}

int main() {
    int n, m;  // Variáveis para o número de linhas (n) e colunas (m) do labirinto.
    cin >> n >> m;  // Lê o número de linhas e colunas do labirinto.

    // Lê a matriz do labirinto.
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> labirinto[i][j];
        }
    }

    dfs(0, 0, n, m);  // Inicia a busca em profundidade a partir da célula (0, 0).

    return 0;
}
