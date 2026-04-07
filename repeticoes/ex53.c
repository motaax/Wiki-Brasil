#include <stdio.h>

int main() {
    int i;
    float num, soma = 0, media;

    for(i = 0; i < 5; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%f", &num);
        soma += num;
    }

    media = soma / 5;

    printf("Soma = %.2f\n", soma);
    printf("Media = %.2f\n", media);

    return 0;
}