#include <stdio.h>

int main() {
    int n, i, idade;
    float soma = 0, media;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Quantidade invalida!\n");
        return 0;
    }

    for(i = 0; i < n; i++) {
        printf("Digite a idade da %dª pessoa: ", i + 1);
        scanf("%d", &idade);
        soma += idade;
    }

    media = soma / n;

    printf("Media de idade: %.2f\n", media);

    if(media >= 0 && media <= 25) {
        printf("Turma jovem\n");
    } else if(media <= 60) {
        printf("Turma adulta\n");
    } else {
        printf("Turma idosa\n");
    }

    return 0;
}