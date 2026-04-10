#include <stdio.h>

int main() {
    int vetor[5];
    int i = 0;

    while (i < 5) {
        printf("Digite um numero: \n");
        scanf("%d", &vetor[i]);
        i++;
    }

    i = 0;
    printf("Numeros digitados: \n");
    while (i < 5) {
        printf("%d\n", vetor[i]);
        i++;
    }

    return 0;
}