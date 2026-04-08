#include <stdio.h>

int main() {
    int cds;
    int preco, total = 0;

    printf("Digite a quantidade de CDs: \n");
    scanf("%d", &cds);

    for(int i = 1; i <= cds; i++) {
        printf("Digite o preco do CD %d: \n", i);
        scanf("%d", &preco);
        total += preco;
    }

    printf("Preco total: R$%d \n Media de custo por CD: R$%d \n", total, total / cds);

    return 0;
}