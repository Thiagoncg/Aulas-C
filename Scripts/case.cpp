#include <iostream>

int main()
{

    int number1 = 150;
    int number2 = 5697;
    float resultado;
    char op;
    std::cout << "Escolha uma operação: ";
    std::cin >> op;

    switch (op)
    {
    case '+':
        resultado = number1 + number2;
        std::cout << "Adição selecionada: " << resultado << std::endl;
        break;

    case '-':
        resultado = number1 - number2;
        std::cout << "Subtração selecionada: "<< resultado << std::endl;
        break;

    case '*':
        resultado = number1 * number2;
        std::cout << "Multiplicação selecionada: " << resultado << std::endl;
        break;

    case '/':
        resultado = number1 / number2;
        std::cout << "Divisão selecionada: " << resultado << std::endl;
        break;

    default:
        std::cout << "Opção inválida." << std::endl;
    }

    return 0;
}
