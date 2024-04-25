
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;
int main()
{
    srand(time(NULL));

    //int x = rand();

    int x = rand() % 10;

    cout << x << endl;

    return 0;
}
