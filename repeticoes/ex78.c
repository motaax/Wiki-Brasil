#include <stdio.h>

int main() {
    int codigo;
    float altura, peso;
    
    int codMaisAlto = 0, codMaisBaixo = 0, codMaisGordo = 0, codMaisMagro = 0;
    float maisAlto = 0, maisBaixo = 0, maisGordo = 0, maisMagro = 0;
    
    float somaAltura = 0, somaPeso = 0;
    int contador = 0;
    
    while (1) {
        printf("Digite o código do cliente (0 para encerrar): ");
        scanf("%d", &codigo);
        
        if (codigo == 0) {
            break; 
        }
        
        printf("Digite a altura do cliente (m): ");
        scanf("%f", &altura);
        
        printf("Digite o peso do cliente (kg): ");
        scanf("%f", &peso);
        
        somaAltura += altura;
        somaPeso += peso;
        contador++;
        
        if (contador == 1) {
            maisAlto = maisBaixo = altura;
            maisGordo = maisMagro = peso;
            codMaisAlto = codMaisBaixo = codMaisGordo = codMaisMagro = codigo;
        } else {
            if (altura > maisAlto) {
                maisAlto = altura;
                codMaisAlto = codigo;
            }
            if (altura < maisBaixo) {
                maisBaixo = altura;
                codMaisBaixo = codigo;
            }
            if (peso > maisGordo) {
                maisGordo = peso;
                codMaisGordo = codigo;
            }
            if (peso < maisMagro) {
                maisMagro = peso;
                codMaisMagro = codigo;
            }
        }
    }
    
    if (contador == 0) {
        printf("Nenhum dado foi informado.\n");
    } else {
        printf("\n--- RESULTADOS ---\n");
        printf("Mais alto: Código %d, Altura %.2f m\n", codMaisAlto, maisAlto);
        printf("Mais baixo: Código %d, Altura %.2f m\n", codMaisBaixo, maisBaixo);
        printf("Mais gordo: Código %d, Peso %.2f kg\n", codMaisGordo, maisGordo);
        printf("Mais magro: Código %d, Peso %.2f kg\n", codMaisMagro, maisMagro);
        printf("Média das alturas: %.2f m\n", somaAltura / contador);
        printf("Média dos pesos: %.2f kg\n", somaPeso / contador);
    }
    
    return 0;
}