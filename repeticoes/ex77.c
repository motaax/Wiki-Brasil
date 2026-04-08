#include <stdio.h>

int main() {
    int de, comeco, fim;
    printf("Montar a tabuada de: ");
    scanf("%d", &de);

    printf("Começar por: ");
    scanf("%d", &comeco);
    
    printf("Terminar em: ");
    scanf("%d", &fim);

    for (int i = comeco; i <= fim; i++)
        printf("\n%d X %d = %d", de, i, de * i);

    return 0;
}