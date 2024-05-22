#include <iostream>

using namespace std;

// Função para calcular a receita total
double calcularReceitaTotal(double vendas, double investimentos) {
  double receitaTotal = vendas + investimentos;
  return receitaTotal;
}

// Função para calcular as despesas totais
double calcularDespesasTotais(double aluguel, double serviçosPublicos, double salarios) {
  double despesasTotais = aluguel + serviçosPublicos + salarios;
  return despesasTotais;
}

// Função para calcular o lucro líquido
double calcularLucroLiquido(double receitaTotal, double despesasTotais) {
  double lucroLiquido = receitaTotal - despesasTotais;
  return lucroLiquido;
}

int main() {
  // Declarar variáveis ​​para renda e despesas
  double vendas = 10000.00;
  double investimentos = 5000.00;
  double aluguel = 2000.00;
  double serviçosPublicos = 500.00;
  double salarios = 3000.00;

  // Calcular a receita total, as despesas totais e o lucro líquido
  double receitaTotal = calcularReceitaTotal(vendas, investimentos);
  double despesasTotais = calcularDespesasTotais(aluguel, serviçosPublicos, salarios);
  double lucroLiquido = calcularLucroLiquido(receitaTotal, despesasTotais);

  // Imprimir relatório financeiro
  cout << "Relatório Financeiro" << endl;
  cout << "-----------------" << endl;
  cout << "Receita:" << endl;
  cout << "  Vendas: R$ " << vendas << endl;
  cout << "  Investimentos: R$ " << investimentos << endl;
  cout << "  Receita Total: R$ " << receitaTotal << endl;
  cout << endl;
  cout << "Despesas:" << endl;
  cout << "  Aluguel: R$ " << aluguel << endl;
  cout << "  Serviços Públicos: R$ " << serviçosPublicos << endl;
  cout << "  Salários: R$ " << salarios << endl;
  cout << "  Despesas Totais: R$ " << despesasTotais << endl;
  cout << endl;
  cout << "Lucro Líquido: R$ " << lucroLiquido << endl;

  return 0;
}
