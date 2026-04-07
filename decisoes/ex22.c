#include <stdio.h>

int main() {
    char n;
    printf("Digite uma letra: \n");
    scanf("%c", &n);

    if(n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u') {
        printf("Vogal \n");
    } else {
        printf("Consoante \n");
    }

    return 0;
}