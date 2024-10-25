#include <iostream>
using namespace std;

int calculoFibo(int n){
    if (n <= 1)
    {
        return n;
    }
    return calculoFibo(n - 1) + calculoFibo(n - 2); // Caso F(0), F(1) = 1
}

int main(){
    int n;
    cout << " Digite o valor de n, quantidade total:";
    cin >> n;

    cout<<"IMPRIME A SEQUENCIA DE FIBONACCI EM N-ESIMO NUMERO";

    for (int i = 0; i <= n; i++)
    {
        cout << calculoFibo(i);
        cout << endl;
    }

    cout << endl;

    return 0;
    
}