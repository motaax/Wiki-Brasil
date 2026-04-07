#include <stdio.h>

int main() {
    float nota;
    printf("Digite uma nota(0 a 10): \n");
    scanf("%f", &nota);

    while(nota > 10 || nota < 0) {
        printf("Valor invalido! \n Digite uma nota de 0 a 10: ");
        scanf("%f", &nota);
    }

    return 0;
}