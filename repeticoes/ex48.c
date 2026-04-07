#include <stdio.h>

int main() {
    char nome[100], sexo, estadoCivil;
    int idade;
    float salario;

    printf("Digite o nome: ");
    scanf("%s", nome);
    while (strlen(nome) < 4)
    {
        printf("\nNome invalido!");
        printf("\nDigite o nome: ");
        scanf("%s", nome);
    }
    printf("\nDigite a idade: ");
    scanf("%i", &idade);
    while ((idade < 0) || (idade > 150))
    {
        printf("\nIdade invalida!");
        printf("\nDigite a idade: ");
        scanf("%i", &idade);
    }
    printf("\nDigite o salario: ");
    scanf("%f", &salario);
    while (salario <= 0)
    {
        printf("\nSalario invalido!");
        printf("\nDigite o salario: ");
        scanf("%f", &salario);
    }
    printf("\nDigite o sexo (f ou m): ");
    scanf("%c", &sexo);
    while ((sexo != 'f') && (sexo != 'm'))
    {
        printf("\nSexo invalido!");
        printf("\nDigite o sexo (f ou m): ");
        scanf("%c", &sexo);
    }
    printf("\nDigite o estado civil (s, c, v, d): ");
    scanf("%c", &estadoCivil);
    while ((estadoCivil != 's') && (estadoCivil != 'c') &&
           (estadoCivil != 'v') && (estadoCivil != 'd'))
    {
        printf("\nEstado civil invalido!");
        printf("\nDigite o estado civil (s, c, v, d): ");
        scanf("%c", &estadoCivil);
    }

    return 0;
}