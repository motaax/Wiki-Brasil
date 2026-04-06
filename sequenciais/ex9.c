#include <stdio.h>

int main()
{
    float grausC, grausF;
    printf("Digite a temperatura em graus Farenheit: \n");
    scanf("%f", &grausF);

    grausC = (5 * (grausF - 32) / 9);
    printf("%.2f graus Farenheit correspondem a %.2f graus Celsius \n", grausF, grausC);

    return 0;
}