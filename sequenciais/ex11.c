#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    float num3, a, b, c;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &num1);
    printf("Digite outro numero inteiro: \n");
    scanf("%d", &num2);
    printf("Digite um numero real: \n");
    scanf("%f", &num3);

    a = (num1 * 2) * (num1 / 2);
    b = (num1 * 3) + num3;
    c = pow(num3, 3);

    printf("a - %f \n b - %f \n c - %f", a, b, c);

    return 0;
}