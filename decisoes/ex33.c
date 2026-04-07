#include <stdio.h>

int main() {
    float lado1, lado2, lado3;
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &lado1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &lado2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &lado3);

    if (
        (lado1 + lado2 > lado3) 
        && (lado1 + lado3 > lado2) 
        && (lado2 + lado3 > lado1)
    )
    {
        if ((lado1 == lado2) && (lado2 == lado3))
            printf("E um triangulo equilatero!");
        else if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3))
            printf("E um triangulo isosceles!");
        else
            printf("E um triangulo escaleno!");
    }
    else
        printf("Nao e um triangulo!");

    return 0;
}