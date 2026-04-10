#include <stdio.h>

int main() {
    int notas[4];
    float soma = 0.0;
    int i = 0;

    while(i < 4) {
        printf("Digite as notas: \n");
        scanf("%d", &notas[i]);
        i++;
    }

    i = 0;

    printf("Notas digitadas: \n");
    while(i < 4) {
        printf("%d\n", notas[i]);
        soma += notas[i];
        i++;
    }

    printf("A media das notas e %.2f \n", soma / 4.0);

    return 0;
}