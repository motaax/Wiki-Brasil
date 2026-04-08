#include <stdio.h>

int main() {
    float divida, juros, valorParcela;
    int parcelas;
    int i;

    int qtdParcelas[] = {1, 3, 6, 9, 12};
    float percJuros[] = {0, 10, 15, 20, 25};

    printf("Digite o valor da dívida: R$ ");
    scanf("%f", &divida);

    printf("\n%-15s %-15s %-20s %-15s\n", "Valor da Dívida", "Valor dos Juros", "Quantidade de Parcelas", "Valor da Parcela");

    for(i = 0; i < 5; i++) {
        parcelas = qtdParcelas[i];
        juros = divida * (percJuros[i] / 100.0);
        valorParcela = (divida + juros) / parcelas;

        printf("R$ %-12.2f R$ %-12.2f %-20d R$ %-12.2f\n", divida, juros, parcelas, valorParcela);
    }

    return 0;
}