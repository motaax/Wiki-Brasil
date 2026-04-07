#include <stdio.h>

int main() {
    int n;
    printf("Digite um ano: \n");
    scanf("%d", &n);

    if(n % 4 == 0) {
        printf("O ano %d e bissexto! \n", n);
    } else {
        printf("O ano %d nao e bissexto! \n", n);
    }

    return 0;
}