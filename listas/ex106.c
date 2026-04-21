#include <stdio.h>

int main() {
    float vendas, salario;
    int cont[9] = {0}; 
    int indice;

    printf("Digite as vendas brutas (-1 para encerrar):\n");

    while(1) {
        scanf("%f", &vendas);

        if(vendas == -1)
            break;

        salario = 200 + (0.09 * vendas);

        indice = (int)(salario - 200) / 100;

        if(indice > 8)
            indice = 8;

        cont[indice]++;
    }

    printf("\nDistribuicao de salarios:\n");

    for(int i = 0; i < 8; i++) {
        printf("$%d - $%d: %d vendedores\n", 
               200 + i*100, 299 + i*100, cont[i]);
    }

    printf("$1000 em diante: %d vendedores\n", cont[8]);

    return 0;
}