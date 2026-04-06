#include <stdio.h>

int main() {
    float peso, excesso, multa;
    printf("Digite o peso em kg da pescaria de hoje: \n");
    scanf("%f", &peso);

    excesso = peso - 50;
    multa = excesso * 4;
    printf("Você pescou %.2fkg em excesso, e terá que pagar R$%.2f de multa. \n", excesso, multa);

    return 0;
}