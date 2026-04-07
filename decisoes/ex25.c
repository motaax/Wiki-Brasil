#include <stdio.h>

int main() {
    float numero1, numero2, numero3;
    printf("Digite um numero: ");
    scanf("%f", &numero1);

    printf("Digite outro numero: ");
    scanf("%f", &numero2);

    printf("Digite mais um numero: ");
    scanf("%f", &numero3);

    if (numero1 > numero2 && numero1 > numero3)
        printf("%f foi o maior numero digitado.", numero1);
    else if (numero2 > numero1 && numero2 > numero3)
        printf("%f foi o maior numero digitado.", numero2);
    else
        printf("%f foi o maior numero digitado.", numero3);

    if (numero1 < numero2 && numero1 < numero3)
        printf("\n%f foi o menor numero digitado.", numero1);
    else if (numero2 < numero1 && numero2 < numero3)
        printf("\n%f foi o menor numero digitado.", numero2);
    else
        printf("\n%f foi o menor numero digitado.", numero3);

    return 0;
}