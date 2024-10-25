#include <iostream>
using namespace std;

int somaN(int n) {
	if (n== 0)
		return 0;
	
	int res = n + somaN(n-1);
	
	return res;
}

int main() {
	int n = 1900;
	
	int soma = somaN(n);
	cout << "Soma = " << soma;
	
	return 0;
}