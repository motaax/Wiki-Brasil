#include <stdio.h>

int main() {
    float salarios[1000], abonos[1000];
    int i = 0, totalFuncionarios = 0;
    float salario, totalAbonos = 0, maiorAbono = 0;
    int qtdMinimo = 0;

    printf("Digite os salarios (0 para encerrar):\n");

    while (1) {
        scanf("%f", &salario);

        if (salario == 0)
            break;

        salarios[i] = salario;

        abonos[i] = salario * 0.2;
        if (abonos[i] < 100) {
            abonos[i] = 100;
            qtdMinimo++;
        }

        totalAbonos += abonos[i];

        if (abonos[i] > maiorAbono) {
            maiorAbono = abonos[i];
        }

        i++;
        totalFuncionarios++;
    }

    printf("\nSalario\t\tAbono\n");

    for (i = 0; i < totalFuncionarios; i++) {
        printf("R$ %.2f\tR$ %.2f\n", salarios[i], abonos[i]);
    }

    printf("\nTotal de funcionarios: %d\n", totalFuncionarios);
    printf("Valor total em abonos: R$ %.2f\n", totalAbonos);
    printf("Quantidade que recebeu o minimo: %d\n", qtdMinimo);
    printf("Maior valor de abono: R$ %.2f\n", maiorAbono);

    return 0;
}