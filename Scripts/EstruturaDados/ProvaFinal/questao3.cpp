#include <iostream>
#include <vector>
#include <random>
#include <algorithm> // Necessária para a função push_back

using namespace std;

vector<int> gerarJogoMegaSena();
void mostrarJogos(const vector<vector<int>>& jogos);

int main() {
  int quantidadeJogos;

  cout << "Digite a quantidade de jogos que deseja gerar: ";
  cin >> quantidadeJogos;

  vector<vector<int>> jogos(quantidadeJogos);

  for (int i = 0; i < quantidadeJogos; ++i) {
    jogos[i] = gerarJogoMegaSena();
  }

  mostrarJogos(jogos);

  return 0;
}

vector<int> gerarJogoMegaSena() {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis(1, 60);

  vector<int> numerosSorteados;

  while (numerosSorteados.size() < 6) {
    int numeroAleatorio = dis(gen);

    // Verifica se o número já existe no vetor antes de adicioná-lo
    if (find(numerosSorteados.begin(), numerosSorteados.end(), numeroAleatorio) == numerosSorteados.end()) {
      numerosSorteados.push_back(numeroAleatorio);
    }
  }

  sort(numerosSorteados.begin(), numerosSorteados.end());
  return numerosSorteados;
}

void mostrarJogos(const vector<vector<int>>& jogos) {
  cout << "\nSeus jogos:\n";
  for (int i = 0; i < jogos.size(); ++i) {
    cout << "Jogo " << i + 1 << ": ";
    for (int numero : jogos[i]) {
      cout << numero << " ";
    }
    cout << endl;
  }
}
