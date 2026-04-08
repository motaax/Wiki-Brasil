#include <stdio.h>

int main() {
    int num;
    int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    printf("Digite números positivos (negativo para sair):\n");

    for (;;) {
        scanf("%d", &num);

        if (num < 0) {
            break; 
        }

        if (num <= 25) {
            intervalo1++;
        } else if (num <= 50) {
            intervalo2++;
        } else if (num <= 75) {
            intervalo3++;
        } else if (num <= 100) {
            intervalo4++;
        }
    }

    printf("Quantidade de números em [0-25]: %d\n", intervalo1);
    printf("Quantidade de números em [26-50]: %d\n", intervalo2);
    printf("Quantidade de números em [51-75]: %d\n", intervalo3);
    printf("Quantidade de números em [76-100]: %d\n", intervalo4);

    return 0;
}