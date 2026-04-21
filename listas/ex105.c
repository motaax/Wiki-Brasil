#include <stdio.h>

int main() {
    float notas[100]; 
    int i = 0, qtd = 0;
    float valor, soma = 0, media;
    int acimaMedia = 0, abaixoSete = 0;

    printf("Digite as notas (-1 para encerrar):\n");
    while(1) {
        scanf("%f", &valor);

        if(valor == -1) {
            break;
        }

        notas[i++] = valor;
        qtd++;
        soma += valor;
    }

    if(qtd == 0) {
        printf("Nenhum valor foi informado.\n");
        return 0;
    }

    media = soma / qtd;

    printf("\nQuantidade de valores lidos: %d\n", qtd);

    printf("\nValores na ordem informada:\n");
    for(i = 0; i < qtd; i++) {
        printf("%.2f ", notas[i]);
    }

    printf("\n\nValores na ordem inversa:\n");
    for(i = qtd - 1; i >= 0; i--) {
        printf("%.2f\n", notas[i]);
    }

    for(i = 0; i < qtd; i++) {
        if(notas[i] > media) {
            acimaMedia++;
        }
        if(notas[i] < 7) {
            abaixoSete++;
        }
    }

    printf("\nSoma dos valores: %.2f\n", soma);
    printf("Media dos valores: %.2f\n", media);
    printf("Quantidade acima da media: %d\n", acimaMedia);
    printf("Quantidade abaixo de 7: %d\n", abaixoSete);

    printf("\nPrograma encerrado.\n");

    return 0;
}