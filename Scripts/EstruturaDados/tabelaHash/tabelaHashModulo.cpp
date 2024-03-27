#include <iostream>
#include <vector>

int main() {
    int valor = 36;
    int tamanhoVetor = 6;

    // Cria um vetor com o tamanho especificado
    std::vector<int> vetor(tamanhoVetor, -1);  // Inicializa o vetor com -1

    // Calcula a posição usando a fórmula "chave % tamanho do vetor"
    int posicao = valor % tamanhoVetor;

    // Armazena o valor na posição calculada
    vetor[posicao] = valor;

    // Imprime a posição e o valor armazenado
    std::cout << "O numero " << valor << " foi armazenado na posicao " << posicao << " do vetor.\n";

    return 0;
}
