#include <stdio.h>

int main() {
    float morango, maca, valor;
    printf("Digite quantos quilos de morango foram comprados: ");
    scanf("%f", &morango);

    printf("Digite quantos quilos de maca foram comprados: ");
    scanf("%f", &maca);
    
    valor = 0;

    if (morango <= 5)
        valor += morango * 2.5;
    else
        valor += morango * 2.2;
    if (maca <= 5)
        valor += maca * 1.8;
    else
        valor += maca * 1.5;

    if ((morango + maca) > 8 || valor > 25)
        valor -= valor * 10 / 100;
    printf("O valor a ser pago e R$%.2f", valor);

    return 0;
}