#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite tres numeros: \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c) {
        printf("O maior numero e o %d \n", a);
    } else if(b > a && b > c) {
        printf("O maior numero e o %d \n", b);
    } else if(c > a && c > b) {
        printf("O maior numero e o %d \n", c);
    } else {
        printf("Nenhum numero e o maior \n");
    }

    return 0;
}