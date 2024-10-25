#include <iostream>
using namespace std;

float media(int lista[], int tamanho) {
    int soma = 0;
    for(int i = 0; i < tamanho; i++)
        soma = lista[i];
    return (float)soma / tamanho;
}

int main() {
    int lista[4] = {1, 2, 3, 4};
    float m = media(lista, 4);
    cout << m << endl;
    return 0;
}
