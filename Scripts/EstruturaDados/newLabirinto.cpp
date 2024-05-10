#include <iostream>
#include <vector>

#define MAX 10  // Define o tamanho máximo do labirinto.

using namespace std;

int labirinto[MAX][MAX];  // Matriz que representa o labirinto.
bool visitado[MAX][MAX];  // Matriz que rastreia quais células já foram visitadas.

// Função para verificar se uma célula é válida para visitar.
bool valido(int x, int y, int n, int m) {
    //Verificando se a célula ou vertice esta dentro dos limites da matriz
    if(x < 0 || y < 0 || x>=n || y >= m) return false;

    //verifica se a célula ou vértice foi visitado ou é uma parede
    if(visitado[x][y] || labirinto[x][y] == 1) return false;

    return true;
}
// Função de busca de profundidade para encontrar o melhor caminho
void dsf(int x, int y, int n, int m){
    //Este vetor efetua o deslocamento no ixo x (cima, baixo, direita esquerda)
    static int dx[] = {-1, 0, 1, 0};

    //Este vetor efetua o deslocamento no ixo x (cima, baixo, direita esquerda)
    static int dy[] = {0, 1, 0, -1};

    visitado[x][y] = true; //Marca a célula atual como visitado
    //Imprime a célula atual.
    cout <<"("<< x <<", "<< y <<")"<<endl;

    //explicar ?
    for(int i = 0; i < 4; i++){
        if(valido(x + dx[i], y + dy[i], n, m)){
            dsf(x + dx[i], y + dy[i], n, m);
        }
    }
}
int main(){
    
}



