#include <iostream>
#include <iomanip>

using namespace std;

#define LIN 10
#define COL 10

int main(){
    int x; // numero da coluna;
    int y; // numero da linha;
    int tabela[LIN][COL]; //Tabela da Tabuada;

    //PREENCHER A TABELA
    for(y = 0; y < LIN; y += 1){
        for (x = 0; x < COL; x += 1)
        {
            tabela[y][x] = y * x;
            cout << "\n Tabela de multiplicação\n";
            //Imprime o numero de colunas
            cout << setw(6) << 0;
            for (x = 1; x < COL; x += 1)
            {
                cout << setw(3) << x;
                cout  << endl;
            }            

        }        
    }
}