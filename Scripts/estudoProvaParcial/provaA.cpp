#include <stdio.h>

int main() {
    int a, b, c, maior;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b && a > c) {
        maior = a;
    }
    else if (b > a && b > c) {
        maior = b;
    }
    else {
        maior = c;
    }

    printf("O maior número é: %d\n", maior);
    return 0;
}
