#include <stdio.h>

int main() {
    int n, fatorial;
    char opcao;

    do {
        do {
            printf("Digite um numero inteiro positivo menor que 16: ");
            scanf("%d", &n);

            if(n < 0 || n >= 16) {
                printf("Valor invalido! Tente novamente.\n");
            }

        } while(n < 0 || n >= 16);

        fatorial = 1;
        for(int i = n; i >= 1; i--) {
            fatorial *= i;
        }

        printf("O fatorial de %d e %d\n", n, fatorial);

        printf("Deseja calcular outro fatorial? (s/n): ");
        scanf(" %c", &opcao);

    } while(opcao == 's' || opcao == 'S');

    printf("Programa encerrado.\n");

    return 0;
}