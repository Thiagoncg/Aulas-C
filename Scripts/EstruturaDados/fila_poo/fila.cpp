#include <iostream>
#include "fila.h"

using namespace std;

fila::fila()
{
    primeiro = 0;
    ultimo = 0;
    estrutura = new TipoItem[max_itens];
}

fila::~fila()
{
    delete[] estrutura;
}

bool fila::isVazia()
{
    return (primeiro == ultimo);
}

bool fila::isCheia()
{
    return(ultimo-primeiro == max_itens);
}

void fila:: inserir(TipoItem item)
{
    if(isCheia())
    {
        cout <<" Esta cheia\n";
        cout <<" elemento no pod ser isnerido\n"; 
    }else{
        estrutura[ultimo % max_itens] = item;
        ultimo++;
    }
}

TipoItem remover()
{

}

void fila::imprimir()
{
    cout<< "Meus Elementos: []";
    for(int i=primeiro; i< ultimo; i++)
    {
        cout << estrutura[i % max_itens];
    }
    cout << "]";
}