#include <stdio.h>

int main() {
    int n, i, voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0;

    printf("Digite o numero total de eleitores: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEleitor %d\n", i + 1);
        printf("Vote no candidato (1, 2 ou 3): ");
        scanf("%d", &voto);

        if(voto == 1) {
            candidato1++;
        } else if(voto == 2) {
            candidato2++;
        } else if(voto == 3) {
            candidato3++;
        } else {
            printf("Voto invalido! Tente novamente.\n");
            i--; 
        }
    }

    printf("\nResultado da eleicao:\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);

    return 0;
}