#include <stdio.h>

int main() {
    int i;
    float preco = 1.99;

    printf("Tabela de precos:\n");

    for(i = 1; i <= 50; i++) {
        printf("%2d - R$ %.2f\n", i, i * preco);
    }

    return 0;
}