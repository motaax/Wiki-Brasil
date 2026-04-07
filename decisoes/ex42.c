#include <stdio.h>

int main() {
    char resposta;
    int positivos = 0;

    printf("Telefonou para a vitima? (S ou N): ");
    scanf("%c", &resposta);

    if (resposta == 'S' || resposta == 's')
        positivos++;
    printf("Esteve no local do crime? (S ou N): ");
    scanf("%c", &resposta);

    if (resposta == 'S' || resposta == 's')
        positivos++;
    printf("Mora perto da vitima? (S ou N): ");
    scanf("%c", &resposta);

    if (resposta == 'S' || resposta == 's')
        positivos++;
    printf("Devia para a vitima? (S ou N): ");
    scanf("%c", &resposta);

    if (resposta == 'S' || resposta == 's')
        positivos++;
    printf("Ja trabalhou com a vitima? (S ou N): ");
    scanf("%c", &resposta);

    if (resposta == 'S' || resposta == 's')
        positivos++;

    if (positivos < 2)
        printf("Inocente");
    else if (positivos == 2)
        printf("Suspeita");
    else if (positivos < 5)
        printf("Cumplice");
    else
        printf("Assassino");

    return 0;
}