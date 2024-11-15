#include <iostream>
using namespace std;

void troca(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    cout << "Digite dois números inteiros: ";
    cin >> num1 >> num2;
    troca(num1, num2);
    cout << "Após a troca, o primeiro número é: " << num1 << ", e o segundo número é: " << num2 << endl;
    return 0;
}
