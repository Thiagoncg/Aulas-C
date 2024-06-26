#include <iostream>
#include <random>

int main() {
    std::random_device rd;          // Obtém uma seed verdadeira com base no rardware
    std::mt19937 rng(rd());         // Mersenne Twister 19937 gerador algoritimo
    std::uniform_int_distribution<int> dist(1, 100);  // Intervalo de 1 a 100

    int random_number = dist(rng);
    std::cout << "Número aleatório: " << random_number << std::endl;

    return 0;
}