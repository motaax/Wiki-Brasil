#include <stdio.h>
#include <math.h>

int main() {
    float numero;
    printf("Digite um numero: \n");
    scanf("%f", &numero);
    
    if (floor(numero) == numero) {
        printf("Inteiro");
    } else {
        printf("Decimal");
    }

    return 0;
}