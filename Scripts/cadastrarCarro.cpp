#include <iostream>
#include <list>
#include <string>

struct Carro {
    std::string marca;
    std::string modelo;
    std::string cor;
};

void inserirCarro(std::list<Carro>& listaCarros, const std::string& marca, const std::string& modelo, const std::string& cor) {
    Carro novoCarro = {marca, modelo, cor};
    listaCarros.push_back(novoCarro);
}

void listarCarros(const std::list<Carro>& listaCarros) {
    for (const auto& carro : listaCarros) {
        std::cout << "Marca: " << carro.marca << ", Modelo: " << carro.modelo << ", Cor: " << carro.cor << std::endl;
    }
}

int main() {
    std::list<Carro> listaCarros;

    inserirCarro(listaCarros, "Toyota", "Corolla", "Prata");
    inserirCarro(listaCarros, "Honda", "Civic", "Preto");
    inserirCarro(listaCarros, "Ford", "Focus", "Branco");

    std::cout << "Lista de carros cadastrados:" << std::endl;
    listarCarros(listaCarros);

    return 0;
}
