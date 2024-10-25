#include <iostream>
using namespace std;

class Pessoa {
public:
    string nome;
    int idade;

    Pessoa(string n, int i): nome(n), idade(i){}
};

void alterarDadosPessoa(Pessoa &pessoinha){ // referência da pesoinha
    pessoinha.idade += 1; // incrementando a idade
}

int main(){
    Pessoa pessoinha1("LivanKley", 41);
    cout << "Idade anterior: " <<pessoinha1.idade << endl;

    alterarDadosPessoa(pessoinha1);
    cout <<"Idade depois da Alteração"<<pessoinha1.idade<< endl;
}
