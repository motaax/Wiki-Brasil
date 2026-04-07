#include <stdio.h>

int main() {
    
    int primeiro_numero, segundo_numero;
    int soma = 0;

    printf("\nDigite um numero: ");
    scanf("%d", &primeiro_numero);

    printf("\nDigite um numero: ");
    scanf("%d", &segundo_numero);

    for (int i = primeiro_numero + 1; i < segundo_numero; i++) {
        printf("\n%d", i);
        soma += i;
    }

    printf("\nSoma = %d\n", soma);

    return 0;
}