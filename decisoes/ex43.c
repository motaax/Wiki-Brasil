#include <stdio.h>

int main() {
    float litros, preco;
    char combustivel;
    printf("Digite quantos litros voce quer abastecer: ");
    scanf("%f", &litros);

    printf("Digite A para alcool ou G para gasolina: ");
    scanf("%s", &combustivel);

    if (combustivel == 'A' || combustivel == 'a')
    {
        preco = litros * 1.9;
        if (litros <= 20)
            preco -= 1.9 * litros * 3 / 100.0;
        else
            preco -= 1.9 * litros * 5 / 100.0;
    }
    else if (combustivel == 'G' || combustivel == 'g')
    {
        preco = litros * 2.5;
        if (litros <= 20)
            preco -= 2.5 * litros * 4 / 100.0;
        else
            preco -= 2.5 * litros * 6 / 100.0;
    }
    printf("O preço a pagar e R$%.2f", preco);

    return 0;
}