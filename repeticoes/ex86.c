#include <stdio.h>

int main() {
    char gabarito[10] = {'A','B','C','D','E','E','D','C','B','A'};
    char respostas[10];
    int acertos;
    int maior = 0, menor = 10;
    int totalAlunos = 0;
    int somaNotas = 0;
    char outroAluno;

    do {
        acertos = 0;
        printf("\nDigite as respostas do aluno:\n");
        for (int i = 0; i < 10; i++) {
            printf("Questão %d: ", i+1);
            scanf(" %c", &respostas[i]);
        }

        for (int i = 0; i < 10; i++) {
            if (respostas[i] == gabarito[i]) {
                acertos++;
            }
        }

        printf("Total de acertos: %d\n", acertos);

        if (acertos > maior) maior = acertos;
        if (acertos < menor) menor = acertos;
        totalAlunos++;
        somaNotas += acertos;

        printf("Outro aluno vai utilizar o sistema? (S/N): ");
        scanf(" %c", &outroAluno);

    } while (outroAluno == 'S' || outroAluno == 's');

    if (totalAlunos > 0) {
        printf("\n=== Estatísticas da Turma ===\n");
        printf("Maior acerto: %d\n", maior);
        printf("Menor acerto: %d\n", menor);
        printf("Total de alunos: %d\n", totalAlunos);
        printf("Média da turma: %.2f\n", (float)somaNotas / totalAlunos);
    } else {
        printf("Nenhum aluno utilizou o sistema.\n");
    }

    return 0;
}