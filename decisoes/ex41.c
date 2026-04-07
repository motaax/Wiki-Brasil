#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, resultado;
    char op;
    printf("Digite um número: ");
    scanf("%f", &numero1);

    printf("Digite outro número: ");
    scanf("%f", &numero2);

    printf("Digite qual operação (+, -, * ou /) deseja realizar: ");
    scanf("%s", &op);

    if (op == '+')
        resultado = numero1 + numero2;
    else if (op == '-')
        resultado = numero1 - numero2;
    else if (op == '*')
        resultado = numero1 * numero2;
    else if (op == '/')
        resultado = numero1 / numero2;

    printf("O resultado é: \n");

    if ((int)resultado % 2 == 0)
        printf("Par");
    else
        printf("Ímpar");

    if (resultado >= 0)
        printf("\nPositivo");
    else
        printf("\nNegativo");

    if (floor(resultado) == resultado)
        printf("\nInteiro");
    else
        printf("\nDecimal");

    return 0;
}