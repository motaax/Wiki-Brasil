#include <stdio.h>

int main() {
    float populacao_A, populacao_B;
    float taxa_A, taxa_B;
    int anos;
    char repetir;

    do {
        do {
            printf("Informe a população da cidade A: ");
            scanf("%f", &populacao_A);

            if (populacao_A <= 0) {
                printf("Valor invalido! A populacao deve ser positiva.\n");
            }
        } while (populacao_A <= 0);

        do {
            printf("Informe a populacao da cidade B: ");
            scanf("%f", &populacao_B);

            if (populacao_B <= 0) {
                printf("Valor invalido! A populacao deve ser positiva.\n");
            }
        } while (populacao_B <= 0);

        do {
            printf("Informe a taxa de crescimento de A (em %%): ");
            scanf("%f", &taxa_A);

            if (taxa_A <= 0) {
                printf("Valor invalido! A taxa deve ser positiva.\n");
            }
        } while (taxa_A <= 0);

        do {
            printf("Informe a taxa de crescimento de B (em %%): ");
            scanf("%f", &taxa_B);

            if (taxa_B <= 0) {
                printf("Valor invalido! A taxa deve ser positiva.\n");
            }
        } while (taxa_B <= 0);

        anos = 0;

        if (populacao_A >= populacao_B) {
            printf("\nA populacao de A ja e maior ou igual a de B.\n");
        } else {
            while (populacao_A < populacao_B) {
                populacao_A *= (1 + taxa_A / 100);
                populacao_B *= (1 + taxa_B / 100);
                anos++;
            }

            printf("\nDemorou %d anos para A alcançar ou ultrapassar B.\n", anos);
            printf("Populacao final de A: %.0f\n", populacao_A);
            printf("Populacao final de B: %.0f\n", populacao_B);
        }

        printf("\nDeseja repetir o calculo? (s/n): ");
        scanf(" %c", &repetir);

    } while (repetir == 's' || repetir == 'S');

    printf("Programa encerrado.\n");

    return 0;
}