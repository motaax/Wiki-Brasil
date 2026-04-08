#include <stdio.h>

int main() {
    int N, i;
    int num;
    int menor, maior;
    int soma = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        do {
            printf("Digite o %d numero (entre 0 e 1000): ", i + 1);
            scanf("%d", &num);

            if(num < 0 || num > 1000) {
                printf("Valor invalido! Tente novamente.\n");
            }

        } while(num < 0 || num > 1000);

        if(i == 0) {
            menor = num;
            maior = num;
        } else {
            if(num < menor) {
                menor = num;
            }
            if(num > maior) {
                maior = num;
            }
        }

        soma += num;
    }

    printf("\nMenor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Soma: %d\n", soma);

    return 0;
}