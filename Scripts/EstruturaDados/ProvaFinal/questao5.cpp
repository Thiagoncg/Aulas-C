#include <iostream>
using namespace std;

struct Carro {
    string marca;
    int ano;
};

int main() {
    Carro carro1;
    carro1.marca = "Toyota";
    carro1.ano = 2020;

    Carro carro2 = carro1;

    carro2.marca = "Honda";

    cout << carro1.marca << " " << carro1.ano << endl;
    cout << carro2.marca << " " << carro2.ano << endl;

    return 0;
}
