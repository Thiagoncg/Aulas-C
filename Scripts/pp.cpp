#include <iostream>
#include <cstddef>

using namespace std;

// ponteiros.

int main()
{
    int var1;
    int *pont1;

    var1 = 5;
    pont1 = &var1;

    cout <<"O valor da variável do nome" << var1 << endl;
    cout <<"valor armazenado no ponteiro" << pont1 <<endl;
    cout <<"Valor da vaiavel, atravez do ponteiro" <<*pont1<<endl;
}
