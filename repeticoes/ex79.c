#include <stdio.h>

int main() {
    int anoInicial = 1995;
    int anoAtual = 2026;
    float salario, percentual = 1.5;

    printf("Digite o salário inicial do funcionário: R$ ");
    scanf("%f", &salario);

    for (int ano = 1996; ano <= anoAtual; ano++) {
        salario = salario + salario * (percentual / 100);
        percentual *= 2;
    }

    printf("Salário atual em %d: R$ %.2f\n", anoAtual, salario);
    return 0;
}