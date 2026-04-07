#include <stdio.h>

int main() {
    int primeiro_numero, segundo_numero;
    printf("\nDigite um numero: ");
    scanf("%d", &primeiro_numero);

    printf("\nDigite um numero: ");
    scanf("%d", &segundo_numero);

    for (int i = primeiro_numero + 1; i < segundo_numero; i++) {
        printf("\n%d", i);
    }

    return 0;
}