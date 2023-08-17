#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Função que imprime o nome repetido 5 vezes
string ImprimeNome()
{
    string nomes = "Ajenor";
    for (int i = 1; i <= 5; i++)
    {
        std::cout << "Nomes: " << nomes << std::endl;
    }
    return nomes;
}

// Função que imprime um contador de numeros
int ImprimeNumeros()
{
    for (int i = 1; i <= 5; i++)
    {
        std::cout << "Números: " << i << std::endl;
    }
    return 0;
}

int main()
{
    ImprimeNome();
    ImprimeNumeros();

    return 0;
}
