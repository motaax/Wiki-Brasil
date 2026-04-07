#include <stdio.h>

int main() {
    int n;
    printf("Digite um valor: \n");
    scanf("%d", &n);

    if(n >= 0) {
        printf("O valor %d e positivo \n", n);
    } else {
        printf("O valor %d e negativo \n", n);
    }

    return 0;
}