#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    float notas[7];

    while (1) {
        printf("\nDigite o nome do ginasta (ou ENTER para encerrar): ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0'; 

        if (strlen(nome) == 0) {
            break; 
        }

        for (int i = 0; i < 7; i++) {
            printf("Digite a nota do jurado %d: ", i + 1);
            scanf("%f", &notas[i]);
        }
        getchar(); 

        float menor = notas[0], maior = notas[0];
        for (int i = 1; i < 7; i++) {
            if (notas[i] < menor) menor = notas[i];
            if (notas[i] > maior) maior = notas[i];
        }

        float soma = 0;
        int countMaior = 0, countMenor = 0;
        for (int i = 0; i < 7; i++) {
            if (notas[i] == maior && countMaior == 0) {
                countMaior++; 
                continue;
            }
            if (notas[i] == menor && countMenor == 0) {
                countMenor++; 
                continue;
            }
            soma += notas[i];
        }

        float media = soma / 5.0; 

        printf("\nAtleta: %s\n", nome);
        printf("Notas: ");
        for (int i = 0; i < 7; i++) {
            printf("%.2f ", notas[i]);
        }
        printf("\nMédia (desconsiderando a maior e a menor nota): %.2f\n", media);
    }

    printf("\nFim do programa.\n");
    return 0;
}