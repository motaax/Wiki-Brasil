#include <stdio.h>

int main() {
    float maior, menor, temperatura, soma = 0;
    int contador = 0;

    while(1) {
        printf("Digite a temperatura em Kelvin (negativo para sair): \n");
        scanf("%f", &temperatura);

        if(temperatura < 0) {
            break;
        }

        if(contador == 0) {
            
            maior = menor = temperatura;
        }

        contador++;
        soma += temperatura;

        if(temperatura < menor) {
            menor = temperatura;
        }
        if(temperatura > maior) {
            maior = temperatura;
        }
    }

    if(contador > 0) {
        printf("A menor temperatura foi %.2fK\n", menor);
        printf("A maior temperatura foi %.2fK\n", maior);
        printf("A media das temperaturas foi %.3fK\n", soma / contador);
    } else {
        printf("Nenhuma temperatura valida foi digitada.\n");
    }

    return 0;
}