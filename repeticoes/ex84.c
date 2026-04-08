#include <stdio.h>

int main() {
    int codigo, quantidade;
    float totalGeral = 0;

    printf("Cardápio:\n");
    printf("100 - Cachorro Quente - R$ 1,20\n");
    printf("101 - Bauru Simples - R$ 1,30\n");
    printf("102 - Bauru com ovo - R$ 1,50\n");
    printf("103 - Hambúrguer - R$ 1,20\n");
    printf("104 - Cheeseburguer - R$ 1,30\n");
    printf("105 - Refrigerante - R$ 1,00\n");
    printf("Digite 0 para encerrar o pedido.\n\n");

    for (;;) {
        printf("Digite o código do item: ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            break; 
        }

        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);

        float valorItem = 0;

        switch (codigo) {
            case 100:
                valorItem = quantidade * 1.20;
                printf("Cachorro Quente: R$ %.2f\n", valorItem);
                break;
            case 101:
                valorItem = quantidade * 1.30;
                printf("Bauru Simples: R$ %.2f\n", valorItem);
                break;
            case 102:
                valorItem = quantidade * 1.50;
                printf("Bauru com ovo: R$ %.2f\n", valorItem);
                break;
            case 103:
                valorItem = quantidade * 1.20;
                printf("Hambúrguer: R$ %.2f\n", valorItem);
                break;
            case 104:
                valorItem = quantidade * 1.30;
                printf("Cheeseburguer: R$ %.2f\n", valorItem);
                break;
            case 105:
                valorItem = quantidade * 1.00;
                printf("Refrigerante: R$ %.2f\n", valorItem);
                break;
            default:
                printf("Código inválido!\n");
                continue; 
        }

        totalGeral += valorItem;
    }

    printf("\nTotal a pagar: R$ %.2f\n", totalGeral);

    return 0;
}