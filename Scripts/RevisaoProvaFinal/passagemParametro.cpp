#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Digite dois números inteiros: ";
    cin >> num1 >> num2;
    int resultado = soma(num1, num2);
    cout << "A soma é: " << resultado << endl;
    return 0;
}
