#include <stdio.h>

int main() {
    int N, i, j;
    int primo;
    int total_divisoes = 0;

    printf("Digite um numero N: ");
    scanf("%d", &N);

    printf("Numeros primos entre 1 e %d:\n", N);

    for(i = 2; i <= N; i++) {
        primo = 1;

        for(j = 2; j <= i / 2; j++) {
            total_divisoes++;

            if(i % j == 0) {
                primo = 0;
                break;
            }
        }

        if(primo) {
            printf("%d ", i);
        }
    }

    printf("\n\nTotal de divisoes realizadas: %d\n", total_divisoes);

    return 0;
}