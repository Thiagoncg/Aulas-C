#include <iostream>

int somar(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int main() {
    int num1 = 5, num2 = 7;
    int resultado = somar(num1, num2);
    std::cout << "A soma é: " << resultado << std::endl;
    return 0;
}
//Função que retorna a soma de dois numeros com passagem por parametros.