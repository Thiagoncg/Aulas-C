#include <iostream>

using namespace std;

void hanoi(int n, char origem, char auxiliar, char destino)
{
    if (n == 1)
    {
        cout << "Mover disco 1 de " << origem << " para " << destino << endl;
        return;
    }
    hanoi(n - 1, origem, destino, auxiliar);
    cout << "Mover disco " << n << " de " << origem << " para " << destino << endl;
    hanoi(n - 1, auxiliar, origem, destino);
}

int main()
{
    int n;
    cout << "Digite o número de discos: ";
    cin >> n;

    hanoi(n, 'A', 'B', 'C');

    return 0;
}