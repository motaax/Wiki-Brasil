#include <stdio.h>

int main() {
    float salarioHr, salarioMe, horasTrabalhadas;
    printf("Digite quanto voce ganha por hora: \n");
    scanf("%f", &salarioHr);

    printf("Digite quantas horas voce trabalhou esse mes: \n");
    getchar();
    scanf("%f", &horasTrabalhadas);

    salarioMe = salarioHr * horasTrabalhadas;
    printf("Seu salario total do mes eh de R$%.2f \n", salarioMe);

    return 0;
}