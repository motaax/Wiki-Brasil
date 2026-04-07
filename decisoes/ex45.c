#include <stdio.h>

int main() {
    float peso, preco_total, desconto;
    char carne, pagamento;
    printf("Digite F para file duplo, A para alcatra e P para picanha: ");
    scanf("%c", &carne);

    printf("Digite quantos quilos dessa carne vai comprar: ");
    scanf("%f", &peso);

    printf("Dinheiro ou cartao tabajara (5%% de desconto)? D ou C: ");
    scanf("%c", &pagamento);
    preco_total = 0;

    printf("\nHipermercado Tabajara\nCupom fiscal\n");

    if (carne == 'F' || carne == 'f')
    {
        printf("\nItem: File Duplo");
        if (peso > 5)
            preco_total = peso * 5.8;
        else
            preco_total = peso * 4.9;
    }
    else if (carne == 'A' || carne == 'a')
    {
        printf("\nItem: Alcatra");
        if (peso > 5)
            preco_total = peso * 6.8;
        else
            preco_total = peso * 5.9;
    }
    else if (carne == 'P' || carne == 'p')
    {
        printf("\nItem: Picanha");
        if (peso > 5)
            preco_total = peso * 7.8;
        else
            preco_total = peso * 6.9;
    }
    printf("\nQuantidade: %.2fKg", peso);
    printf("\nPreço total: R$%.2f", preco_total);
    if (pagamento == 'D' || pagamento == 'd')
    {
        printf("\nTipo de pagamento: Dinheiro");
        desconto = 0;
        printf("\nDesconto: R$%.2f", desconto);
        printf("\nValor a pagar: R$%.2f", (preco_total - desconto));
    }
    else if (pagamento == 'C' || pagamento == 'c')
    {
        printf("\nTipo de pagamento: Cartao Tabajara");
        desconto = preco_total * 5 / 100.0;
        printf("\nDesconto: R$%.2f", desconto);
        printf("\nValor a pagar: R$%.2f", (preco_total - desconto));
    }

    return 0;
}