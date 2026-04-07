#include <stdio.h>

int main() {
    int n;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    int a = 1, b = 1, proximo;

    if (n >= 1) {
        printf("%d ", a);
    } if (n >= 2) {
        printf("%d ", b);
    }

    for (int i = 3; i <= n; i++) {
        proximo = a + b;
        printf("%d ", proximo);

        a = b;
        b = proximo;
    }

    return 0;
}