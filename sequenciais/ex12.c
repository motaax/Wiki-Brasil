#include <stdio.h>

int main() {
    float altura, peso;
    printf("Digite a sua altura: \n");
    scanf("%f", &altura);

    peso = (72.77 * altura) - 58;
    printf("O seu peso ideal e: %.2fkg \n", peso);

    return 0;
}