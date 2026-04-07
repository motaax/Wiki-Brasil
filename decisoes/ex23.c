#include <stdio.h>

int main() {
    float nota1, nota2, media;
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2.0;
    if (media == 10)
        printf("Aprovado com distincao \n");
    else if (media >= 7)
        printf("Aprovado \n");
    else
        printf("Reprovado \n");

    return 0;
}