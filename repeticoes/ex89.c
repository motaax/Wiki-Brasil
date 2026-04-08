#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);
    printf("=> ");

    while(n > 0) {
        printf("%d", n % 10);
        n -= n % 10;
        n /= 10;
    }

    return 0;
}