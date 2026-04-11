#include <stdio.h>

int main() {
    float notas[4];
    float medias[10];
    int i, j;
    int aprovados = 0;

    for(i = 0; i < 10; i++) {
        float soma = 0;

        printf("Aluno %d \n", i + 1);

        for(j = 0; j < 4; j++) {
            printf("Digite a %d nota: \n", j + 1);
            scanf("%f",&notas[j]);
            soma += notas[j];
        }

        medias[i] = soma / 4;

        if(medias[i] >= 7.0) {
            aprovados++;
        }
    }

    printf("Numero de alunos com media >= 7.0: %d \n", aprovados);

    return 0;
}