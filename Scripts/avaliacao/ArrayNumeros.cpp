#include <iostream>

int main()
{
    int numeros[10];

    for (int i = 0; i < 10; i++)
    {
        numeros[i] = i + 1;
    }

    // Insira seu código aqui

//I - 55
    // int soma = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     soma += numeros[i];
    // }
    // std::cout << "A soma dos números no array é: " << soma << std::endl;


//II - 55
    // int soma = 0;
    // for (int numero : numeros)
    // {
    //     soma += numero;
    // }
    // std::cout << "A soma dos números no array é: " << soma << std::endl;



//III - 45
    // int soma = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     soma += i;
    // }
    // std::cout << "A soma dos números no array é: " << soma << std::endl;



// - 55
    int soma = 0;
    for (int i = 0; i < 10; i++)
    {
        soma += i + 1;
    }
    std::cout << "A soma dos números no array é: " << soma << std::endl;

    return 0;
}
