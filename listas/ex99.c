#include <stdio.h>

int main() {
    int idade[5];
    float altura[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Pessoa %d\n", i + 1);

        printf("Digite a idade: ");
        scanf("%d", &idade[i]);

        printf("Digite a altura: ");
        scanf("%f", &altura[i]);
    }

    printf("Dados em ordem inversa:\n");
    for(i = 4; i >= 0; i--) {
        printf("Idade: %d | Altura: %.2f\n", idade[i], altura[i]);
    }

    return 0;
}