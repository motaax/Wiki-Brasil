#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%i/%i/%i", &dia, &mes, &ano);

    if (ano < 0) 
        printf("Ano invalido!");
    else
    {
        if (mes < 1 || mes > 12)
            printf("Mes invalido!");
        
        else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 ||
                 mes == 10 || mes == 12)
        {
            
            if (dia > 0 && dia < 32)
                printf("Data valida!");
            else
                printf("Dia invalido!");
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            
            if (dia > 0 && dia < 31)
                printf("Data valida!");
            else
                printf("Dia invalido!");
        }
        else 
        {
            if (ano % 4 == 0) 
            {
                if (dia > 0 && dia < 30)
                    printf("Data valida!");
                else
                    printf("Dia invalido!");
            }
            else 
            {
                if (dia > 0 && dia < 29)
                    printf("Data valida!");
                else
                    printf("Dia invalido!");
            }
        }
    }

    return 0;
}