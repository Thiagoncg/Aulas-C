#include <iostream>
#include <cstdlib> // Para a função rand()
#include <ctime> // Para a função time()

int main() {
    srand(time(0)); // Inicializa o gerador de números aleatórios

    int numero = rand() % 101; // Gera um número aleatório entre 0 e 100

    std::cout << "Número sorteado: " << numero << std::endl;

    return 0;

    //Por exemplo, se rand() gera o número 205, a divisão de 205 por 101 é 2 e o resto é 3. Então, 205 % 101 é igual a 3.
}
