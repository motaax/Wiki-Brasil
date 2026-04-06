#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite dois numeros: \n");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2) {
        printf("O maior numero e o %d \n", n1);
    } else {
        printf("O maior numero e o %d \n", n2);
    }

    return 0;
}