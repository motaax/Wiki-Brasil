#include <stdio.h>

int main() {
    int turmas, i, alunos;
    int soma = 0;
    float media;

    printf("Digite a quantidade de turmas: ");
    scanf("%d", &turmas);

    if(turmas <= 0) {
        printf("Quantidade invalida!\n");
        return 0;
    }

    for(i = 0; i < turmas; i++) {
        do {
            printf("Digite a quantidade de alunos da turma %d (max 40): ", i + 1);
            scanf("%d", &alunos);

            if(alunos < 0 || alunos > 40) {
                printf("Valor invalido! Tente novamente.\n");
            }

        } while(alunos < 0 || alunos > 40);

        soma += alunos;
    }

    media = (float)soma / turmas;

    printf("Media de alunos por turma: %.2f\n", media);

    return 0;
}