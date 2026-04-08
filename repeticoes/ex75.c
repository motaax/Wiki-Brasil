#include <stdio.h>

int main() {
    float preco, total, dinheiro, troco;
    int contador;
    char opcao;

    printf("=== Bem-vindo(a) a Loja Tabajara ===\n");

    do {
        total = 0.0;
        contador = 1;

        printf("\nNova compra:\n");

        
        for(;;) {  
            printf("Produto %d: R$ ", contador);
            scanf("%f", &preco);

            if(preco == 0) {
                break; 
            }

            total += preco;
            contador++;
        }

        printf("Total: R$ %.2f\n", total);

        printf("Dinheiro: R$ ");
        scanf("%f", &dinheiro);

        troco = dinheiro - total;
        printf("Troco: R$ %.2f\n", troco);

        printf("\nDeseja registrar outra compra? (s/n): ");
        scanf(" %c", &opcao);

    } while(opcao == 's' || opcao == 'S');

    printf("Fim do programa. Obrigado!\n");

    return 0;
}