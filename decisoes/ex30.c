#include <stdio.h>

int main() {
    float valorDaHora, horasTrabalhadas, salarioBruto, descontoIr, IR, INSS, FGTS, totalDeDescontos, salarioLiquido;

    printf("Digite quanto você recebe por hora: ");
    scanf("%f", &valorDaHora);

    printf("Digite quantas horas você trabalhou esse mês: ");
    scanf("%f", &horasTrabalhadas);

    salarioBruto = valorDaHora * horasTrabalhadas;

    if (salarioBruto <= 900)
        descontoIr = 0.0;
    else if (salarioBruto <= 1500)
        descontoIr = 5;
    else if (salarioBruto <= 2500)
        descontoIr = 10;
    else
        descontoIr = 20;

    IR = salarioBruto * (descontoIr / 100.0);
    INSS = salarioBruto * (10 / 100.0);
    FGTS = salarioBruto * (11 / 100.0);
    totalDeDescontos = IR + INSS;
    salarioLiquido = salarioBruto - totalDeDescontos;

    printf("\nSalário Bruto: R$%.2f", salarioBruto);
    printf("\n(-) IR (5%%): R$%.2f", IR);
    printf("\n(-) INSS (10%%): R$%.2f", INSS);
    printf("\nFGTS (11%%): R$%.2f", FGTS);
    printf("\nTotal de descontos: R$%.2f", totalDeDescontos);
    printf("\nSalário Liquido: R$%.2f", salarioLiquido);

    return 0;
}