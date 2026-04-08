#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    float saltos[5];
    
    while (1) {
        printf("\nDigite o nome do atleta (ou ENTER para encerrar): ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0'; 

        if (strlen(nome) == 0) {
            break; 
        }

        for (int i = 0; i < 5; i++) {
            printf("Digite a distância do salto %d: ", i + 1);
            scanf("%f", &saltos[i]);
        }
        getchar(); 

        float menor = saltos[0], maior = saltos[0];
        for (int i = 1; i < 5; i++) {
            if (saltos[i] < menor) menor = saltos[i];
            if (saltos[i] > maior) maior = saltos[i];
        }

        float soma = 0;
        for (int i = 0; i < 5; i++) {
            if (saltos[i] != maior && saltos[i] != menor) {
                soma += saltos[i];
            }
        }

        int countMaior = 0, countMenor = 0;
        for (int i = 0; i < 5; i++) {
            if (saltos[i] == maior) countMaior++;
            if (saltos[i] == menor) countMenor++;
        }

        if (countMaior > 1) soma += (countMaior - 1) * maior;
        if (countMenor > 1) soma += (countMenor - 1) * menor;

        float media = soma / 3.0;

        printf("\nAtleta: %s\n", nome);
        printf("Saltos: ");
        for (int i = 0; i < 5; i++) {
            printf("%.2f ", saltos[i]);
        }
        printf("\nMédia dos três saltos (desconsiderando o melhor e o pior): %.2f\n", media);
    }

    printf("\nFim do programa.\n");
    return 0;
}