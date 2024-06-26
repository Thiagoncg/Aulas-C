#include <iostream>
#include <vector>

// Função de busca binária
int buscaBinaria(const std::vector<int>& lista, int valor) {
    int esquerda = 0;
    int direita = lista.size() - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Se o valor estiver no meio da lista, retornar o índice
        if (lista[meio] == valor)
            return meio;

        // Se o valor for menor que o elemento no meio, procurar na metade esquerda
        if (lista[meio] > valor)
            direita = meio - 1;
        // Se o valor for maior que o elemento no meio, procurar na metade direita
        else
            esquerda = meio + 1;
    }

    // Se o valor não foi encontrado na lista, retornar -1
    return -1;
}

int main() {
    // Lista de exemplo ordenada
    std::vector<int> lista = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    // Valor fornecido pelo usuário
    int valorProcurado;

    // Solicitar ao usuário que insira o valor a ser procurado
    std::cout << "Insira o valor que deseja pesquisar na lista: ";
    std::cin >> valorProcurado;

    // Chamada da função de busca binária
    int indice = buscaBinaria(lista, valorProcurado);

    // Verificar se o valor foi encontrado e exibir o resultado
    if (indice != -1)
        std::cout << "O valor " << valorProcurado << " foi encontrado no índice " << indice << std::endl;
    else
        std::cout << "O valor " << valorProcurado << " não foi encontrado na lista." << std::endl;

    return 0;
}

