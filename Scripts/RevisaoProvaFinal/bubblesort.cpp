#include <iostream>
using namespace std;

void bubbleSort(int arr[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[5];
    cout << "Digite 5 números para ordenar: ";
    for (int i = 0; i < 5; i++) {
        cin >> vetor[i];
    }
    
    bubbleSort(vetor, 5);
    
    cout << "Vetor ordenado: ";
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    return 0;
}
