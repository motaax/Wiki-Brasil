#include <stdio.h>

int main() {
    int codigo, veiculos, acidentes;
    int i;
    float indice;

    float maiorIndice = -1.0, menorIndice = 999999.0;
    int cidadeMaior = 0, cidadeMenor = 0;
    int somaVeiculos = 0;
    int somaAcidentesPequenas = 0;
    int countPequenas = 0;

    for(i = 0; i < 5; i++) {
        printf("Digite o codigo da cidade %d: ", i+1);
        scanf("%d", &codigo);

        printf("Digite o numero de veiculos de passeio da cidade %d: ", i+1);
        scanf("%d", &veiculos);

        printf("Digite o numero de acidentes com vitimas da cidade %d: ", i+1);
        scanf("%d", &acidentes);

        somaVeiculos += veiculos;

        indice = (float)acidentes / veiculos;

        if(indice > maiorIndice) {
            maiorIndice = indice;
            cidadeMaior = codigo;
        }
        if(indice < menorIndice) {
            menorIndice = indice;
            cidadeMenor = codigo;
        }

        if(veiculos < 2000) {
            somaAcidentesPequenas += acidentes;
            countPequenas++;
        }
    }

    printf("\nMaior indice de acidentes: %.2f na cidade %d\n", maiorIndice, cidadeMaior);
    printf("Menor indice de acidentes: %.2f na cidade %d\n", menorIndice, cidadeMenor);
    printf("Media de veiculos nas 5 cidades: %.2f\n", (float)somaVeiculos / 5);

    if(countPequenas > 0) {
        printf("Media de acidentes nas cidades com menos de 2000 veiculos: %.2f\n", 
               (float)somaAcidentesPequenas / countPequenas);
    } else {
        printf("Nao ha cidades com menos de 2000 veiculos.\n");
    }

    return 0;
}