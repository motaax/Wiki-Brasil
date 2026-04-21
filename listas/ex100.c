#include <stdio.h>

int main() {
    int soma = 0;
    int num;

    for(int i = 0; i < 10; i++) {
        printf("Digite o numero: \n");
        scanf("%d", &num);
        soma += num*num;
    }

    printf("A soma dos quadrados e: %d", soma);

    return 0;
}