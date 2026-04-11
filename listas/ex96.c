#include <stdio.h>

int main() {
    int numeros[20];
    int pares[20], impares[20];
    int i, contPar = 0, contImpar = 0;

    for(i = 0; i < 20; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);

        if(numeros[i] % 2 == 0) {
            pares[contPar] = numeros[i];
            contPar++;
        } else {
            impares[contImpar] = numeros[i];
            contImpar++;
        }
    }

    printf("\nVetor original:\n");
    for(i = 0; i < 20; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n\nVetor de pares:\n");
    for(i = 0; i < contPar; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n\nVetor de ímpares:\n");
    for(i = 0; i < contImpar; i++) {
        printf("%d ", impares[i]);
    }

    printf("\n");

    return 0;
}