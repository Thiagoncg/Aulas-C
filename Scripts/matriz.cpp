#include <iostream>

using namespace std;

int main() {
  const int TAMANHO_LINHA = 5; // Define o tamanho da linha
  const int TAMANHO_COLUNA = 5; // Define o tamanho da coluna

  // Cria a matriz 5x5
  char matriz[TAMANHO_LINHA][TAMANHO_COLUNA];

  // Preenche a matriz com '*'
  for (int linha = 0; linha < TAMANHO_LINHA; ++linha) {
    for (int coluna = 0; coluna < TAMANHO_COLUNA; ++coluna) {
      matriz[linha][coluna] = '*';
    }
  }

  // Imprime a matriz na tela
  for (int linha = 0; linha < TAMANHO_LINHA; ++linha) {
    for (int coluna = 0; coluna < TAMANHO_COLUNA; ++coluna) {
      cout << matriz[linha][coluna] << " ";
    }
    cout << endl;
  }

  return 0;
}
