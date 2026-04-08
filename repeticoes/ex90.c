#include <stdio.h>

int main() {
    int n;
    printf("Digite o número de termos da série: ");
    scanf("%d", &n);

    double soma = 0.0;

    for (int i = 1; i <= n; i++) {
        int numerador = i;
        int denominador = 2 * i - 1; 
        double termo = (double)numerador / denominador;

        printf("%d/%d", numerador, denominador);
        if (i < n) {
            printf(" + ");
        } else {
            printf("\n");
        }

        soma += termo;
    }

    printf("Soma da série: %.2lf\n", soma);

    return 0;
}