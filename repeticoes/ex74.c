#include <stdio.h>

int main() {
    int i;
    float preco;

    printf("Digite o preco do pao: R$ ");
    scanf("%f", &preco);

    printf("\nTabela de precos:\n");

    for(i = 1; i <= 50; i++) {
        printf("%2d - R$ %.2f\n", i, i * preco);
    }

    return 0;
}