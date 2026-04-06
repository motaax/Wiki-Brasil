#include <stdio.h>

int main() {
    float tamanho, velocidade, tamanhoMB, tempo;

    printf("Digite o tamanho do arquivo em MB: \n");
    scanf("%f", &tamanho);

    printf("Digite a velocidade da internet em Mbps: \n");
    scanf("%f", &velocidade);

    tempo = tamanhoMB / velocidade;
    printf("O tempo aproximado e de %.2f segundos \n", tempo);

    return 0;
}