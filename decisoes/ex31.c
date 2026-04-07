#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero(1 a 7): \n");
    scanf("%d", &n);

    if(n == 1) {
        printf("Domingo! \n");
    } else if(n == 2) {
        printf("Segunda! \n");
    } else if(n == 3) {
        printf("Terca! \n");
    } else if(n == 4) {
        printf("Quarta! \n");
    } else if(n == 5) {
        printf("Quinta! \n");
    } else if(n == 6) {
        printf("Sexta! \n");
    } else if(n == 7) {
        printf("Sabado! \n");
    } else {
        printf("Valor invalido! \n");
    }

    return 0;
}