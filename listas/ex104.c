#include <stdio.h>

int main() {
    float temp[12], media = 0;
    int i;

    char *meses[12] = {
        "Janeiro", "Fevereiro", "Marco", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    printf("Digite a temperatura media de cada mes:\n");
    for(i = 0; i < 12; i++) {
        printf("%s: ", meses[i]);
        scanf("%f", &temp[i]);
        media += temp[i];
    }

    media /= 12;

    printf("\nMedia anual: %.2f\n", media);

    printf("\nMeses com temperatura acima da media:\n");
    for(i = 0; i < 12; i++) {
        if(temp[i] > media) {
            printf("%s (%.2f)\n", meses[i], temp[i]);
        }
    }

    return 0;
}