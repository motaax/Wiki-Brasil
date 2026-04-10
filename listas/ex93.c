#include <stdio.h>

int main() {
    int vetor[10];
    int n, i = 0;

    printf("Quantidade: \n");
    scanf("%d", &n);

    printf("Digite a sequencia de numeros: \n");

    while(i < n) {
        scanf("%d", &vetor[i]);
        i++;
    }

    printf("Sequencia: \n");
    i = 0;

    while(i < n) {
        printf("%d \n", vetor[i]);
        i++;
    }

    printf("Sequencia invertida: \n");

    i = n - 1;
    while(i >= 0) {
        printf("%d \n", vetor[i]);
        i--;
    }
    
    return 0;
}