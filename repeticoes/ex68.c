#include <stdio.h>

int main() {
    int N, i;
    float nota, soma = 0, media;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &N);

    for(i=0; i < N; i++) {
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / N;

    printf("Media aritmetica: %.2f\n", media);

    return 0;
}