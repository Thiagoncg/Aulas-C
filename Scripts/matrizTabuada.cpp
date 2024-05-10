#include <iostream>
#include <iomanip>
using namespace std;
#define LIN 10
#define COL 10
int main()
{
    int x;                // numero da coluna
    int y;                // numero da linha
    int tabela[LIN][COL]; // tabela de taboada
    // preenche a tabela
    for (y = 0; y < LIN; y += 1)
        for (x = 0; x < COL; x += 1)
            tabela[y][x] = y * x;
    cout << "\n Tabela de Multiplicacao\n";
    // Imprime o numero das colunas
    cout << setw(6) << 0;
    for (x = 1; x < COL; x += 1)
        cout << setw(3) << x;
    cout << endl;
    // Imprime uma linha horizontal
    cout << " ";
    for (x = 0; x < 3 * COL; x += 1)
            cout
        << "-";
    cout << endl;
    // Imprime as linhas da tablea.
    // Cada linha a precedida pelo indice de linha e uma barra vertical
    for (y = 0; y < LIN; y += 1)
    {
        cout << setw(2) << y << "|";
        for (x = 0; x < COL; x += 1)
            cout << setw(3) << tabela[y][x];
        cout << endl;
    }
}
