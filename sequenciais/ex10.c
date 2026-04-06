#include <stdio.h>

int main() {
    float grausC, grausF;
    printf("Digite a temperatura em graus Celsius: \n");
    scanf("%f", &grausC);

    grausF = (grausC * 9 / 5) + 32;
    printf("%.2f graus Celsius correspondem a %.2f graus Farenheit \n", grausC, grausF);

    return 0;
}