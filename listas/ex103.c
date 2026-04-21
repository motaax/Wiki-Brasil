#include <stdio.h>
#define alunos 5

int main() {
    int idades[alunos], alturas[alunos];
    int media = 0, abaixo = 0;

    for(int i = 0; i < alunos; i++) {
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &idades[i]);
        printf("Digite a altura em cm do aluno %d: ", i + 1);
        scanf("%d", &alturas[i]);
        media += alturas[i];
    }

    media /= alunos;

    for(int i = 0; i < alunos; i++) {
        if(idades[i] > 13) {
            if(alturas[i] < media) {
                abaixo++;
            }
        }
    }

    printf("%d alunos tem altura abaixo da media!", abaixo);

    return 0;
}