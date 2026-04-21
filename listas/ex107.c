#include <stdio.h>

float calcularPercentual(int votosJogador, int totalVotos) {
    return (votosJogador * 100.0) / totalVotos;
}

int main() {
    int votos[24] = {0}; 
    int numero, totalVotos = 0;

    printf("Enquete: Quem foi o melhor jogador?\n\n");

    while (1) {
        printf("Numero do jogador (0=fim): ");
        scanf("%d", &numero);

        if (numero == 0)
            break;

        if (numero < 1 || numero > 23) {
            printf("Informe um valor entre 1 e 23 ou 0 para sair!\n");
            continue;
        }

        votos[numero]++;
        totalVotos++;
    }

    printf("\nResultado da votacao:\n\n");
    printf("Foram computados %d votos.\n\n", totalVotos);

    printf("Jogador\tVotos\t%%\n");

    int melhorJogador = 0;
    int maiorVotos = 0;

    for (int i = 1; i <= 23; i++) {
        if (votos[i] > 0) {
            float perc = calcularPercentual(votos[i], totalVotos);
            printf("%d\t%d\t%.1f%%\n", i, votos[i], perc);

            if (votos[i] > maiorVotos) {
                maiorVotos = votos[i];
                melhorJogador = i;
            }
        }
    }

    float percMelhor = calcularPercentual(maiorVotos, totalVotos);

    printf("\nO melhor jogador foi o numero %d, com %d votos, correspondendo a %.1f%% do total de votos.\n",
           melhorJogador, maiorVotos, percMelhor);

    return 0;
}