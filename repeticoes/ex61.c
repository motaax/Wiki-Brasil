#include <stdio.h>

int main() {
    int n, fatorial = 1;
    printf("Digite um numero: \n");
    scanf("%d", &n);

    for(int i=n; i >= 1; i--) {
        fatorial *= i;
    }

    printf("O fatorial de %d e %d", n, fatorial);

    return 0;
}