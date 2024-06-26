#include <iostream>
#include <vector>

using namespace std;

class Transacao {
private:
  double valor;
  string categoria;

public:
  Transacao(double valor, string categoria) : valor(valor), categoria(categoria) {}

  double getValor() const { return valor; }
  string getCategoria() const { return categoria; }
};

class Financeiro {
private:
  vector<Transacao> entradas;
  vector<Transacao> saidas;

public:
  void adicionarEntrada(double valor, string categoria) {
    entradas.push_back(Transacao(valor, categoria));
  }

  void adicionarSaida(double valor, string categoria) {
    saidas.push_back(Transacao(valor, categoria));
  }
  //Codigo correto

  double getTotal() {
    double total = 0;
    for (Transacao transacao : entradas) {
      total += transacao.getValor();
    }
    for (Transacao transacao : saidas) {
      total -= transacao.getValor();
    }
    return total;
  }
  //codigo correto

  void gerarRelatorio() {
    cout << "Entradas:" << endl;
    for (Transacao transacao : entradas) {
      cout << "  - Valor: " << transacao.getValor() << ", Categoria: " << transacao.getCategoria() << endl;
    }

    cout << "\nSaídas:" << endl;
    for (Transacao transacao : saidas) {
      cout << "  - Valor: " << transacao.getValor() << ", Categoria: " << transacao.getCategoria() << endl;
    }

    cout << "\nTotal: " << getTotal() << endl;
  }
};

int main() {
  Financeiro financas;

  financas.adicionarEntrada(1000, "Salário");
  financas.adicionarEntrada(200, "Freelance");
  financas.adicionarSaida(500, "Aluguel");
  financas.adicionarSaida(100, "Alimentação");

  financas.gerarRelatorio();

  return 0;
}
