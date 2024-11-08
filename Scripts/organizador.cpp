#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n -i - 1; j++)// evita a comparção duplicada dos elementos
        {
            if (arr[j] > arr[j + 1])
            {
                //troco o elemento
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
    
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)    
        cout << arr[i] <<" - ";
        cout << endl;    
}

int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 69};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<"Array Original: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout <<"Array Ordenado: ";
    printArray(arr, n);

    return 0;

}