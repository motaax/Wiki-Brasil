#include <stdio.h>

int main() {
    int N, i, num, menor, maior, soma = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num);

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