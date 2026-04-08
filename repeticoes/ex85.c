#include <stdio.h>

int main() {
    int votos[6] = {0}; // índices 0-3 para candidatos, 4 para nulos, 5 para brancos
    int voto;
    int totalVotos = 0;

    printf("Códigos de voto:\n");
    printf("1 - José\n");
    printf("2 - João\n");
    printf("3 - Maria\n");
    printf("4 - Ana\n");
    printf("5 - Voto Nulo\n");
    printf("6 - Voto em Branco\n");
    printf("Digite 0 para encerrar a votação.\n\n");

    for (;;) { 
        printf("Digite o código do voto: ");
        scanf("%d", &voto);

        if (voto == 0) break; 

        if (voto >= 1 && voto <= 6) {
            votos[voto - 1]++;
            totalVotos++;
        } else {
            printf("Código inválido! Tente novamente.\n");
        }
    }

    printf("\nResultado da votação:\n");
    printf("José: %d votos\n", votos[0]);
    printf("João: %d votos\n", votos[1]);
    printf("Maria: %d votos\n", votos[2]);
    printf("Ana: %d votos\n", votos[3]);
    printf("Votos Nulos: %d\n", votos[4]);
    printf("Votos em Branco: %d\n", votos[5]);

    if (totalVotos > 0) {
        float percNulos = (votos[4] * 100.0) / totalVotos;
        float percBrancos = (votos[5] * 100.0) / totalVotos;

        printf("Percentual de votos nulos: %.2f%%\n", percNulos);
        printf("Percentual de votos em branco: %.2f%%\n", percBrancos);
    } else {
        printf("Nenhum voto registrado.\n");
    }

    return 0;
}