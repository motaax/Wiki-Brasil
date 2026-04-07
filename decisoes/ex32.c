#include <stdio.h>

int main() {
    char aproveitamento;
    float nota1, nota2, media;

    printf("Digite a primeira nota do semestre: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota do semestre: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 9)
        aproveitamento = 'A';
    else if (media >= 7.5)
        aproveitamento = 'B';
    else if (media >= 6)
        aproveitamento = 'C';
    else if (media >= 4)
        aproveitamento = 'D';
    else
        aproveitamento = 'E';

    if (aproveitamento == 'D' || aproveitamento == 'E')
        printf("REPROVADO\n Aproveitamento: %c", aproveitamento);
    else
        printf("APROVADO\n Aproveitamento: %c", aproveitamento);

    return 0;
}