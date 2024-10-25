#include <iostream>
using namespace std;


//Crie uma sttruct de Carros
struct Carro {
    string marca;
    string placa;
    float kilometragem;
};

// Função para exibir os dados e as propriedades do carro
void exibirAluno(Carro carro) {
    cout << "MARCA: " << carro.marca << endl;
    cout << "PLACA: " << carro.placa << endl;
    cout << "KM: " << carro.kilometragem << endl;
}

// Função para calcular a kilometragem da frota de carros
float calcularMedia(Carro carros[], int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += carros[i].kilometragem;
    }
    return soma / tamanho;
}

int main() {
    // Criando um vetor de structs de carros
    Carro carros[4];// Vetor

    // Inicializando o vetor
    carros[0] = {"BMW", "GJF 4111", 100.000};
    carros[1] = {"FORD MUSTANG", "GJF 4112", 100.000};
    carros[2] = {"FERRARI", "GJF 4113", 120.000};
    carros[3] = {"ALFA ROMEU", "GJF 4114", 120.000};


    // Exibindo os dados de cada Carro atravéz de um loop
    for (int i = 0; i < 4; i++) {
        exibirAluno(carros[i]);
        cout << "------------------" << endl;
    }

    // Calculando e exibindo a média da frota de carros
    float media = calcularMedia(carros, 4);
    cout << "A media de Kilometragem da frota e: " << media << endl;

    return 0;
}
