#include <iostream>
#include <vector>
using namespace std;

int buscaDados(vector<int> &arr, int x)
{
    //percorre as informações do vetor até encontrar o elemento
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
           return i;
        }        
    }
    //caso não encontre o elemento
    return -1;    
}

int main()
{
    vector<int> arr = {0,54,48,92,58,1,2,3,4,5,6,7,8,9,52,452,9654,253,325};

    
    int x = 452;

    int resultado = buscaDados(arr, x);
    (resultado == -1) ? cout<<"Elemento noo encontrado \n" : cout<<"encontrado no inice" <<resultado<<"\n";

    return 0;
}