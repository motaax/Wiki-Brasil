#include <stdio.h>

int main() {
    int num, maior;

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (i == 0) {
            maior = num;
        } else {
            if (num > maior) {
                maior = num;
            }
        }
    }

    printf("O maior numero e: %d\n", maior);

    return 0;
}