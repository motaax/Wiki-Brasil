#include <stdio.h>

int main() {
    int n, i;
    int primo = 1;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    if(n <= 1) {
        printf("O numero %d nao e primo!\n", n);
        return 0;
    }

    printf("Divisores de %d: ", n);

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);

            if(i != 1 && i != n) {
                primo = 0;
            }
        }
    }

    printf("\n");

    if(primo) {
        printf("O numero %d e primo!\n", n);
    } else {
        printf("O numero %d nao e primo!\n", n);
    }

    return 0;
}