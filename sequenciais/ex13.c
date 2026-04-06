#include <stdio.h>

int main() {
    float altura, pesoIdealH, pesoIdealM;
    printf("Digite sua altura em m: \n");
    scanf("%f", &altura);

    pesoIdealH = (72.7 * altura) - 58;
    pesoIdealM = (62.1 * altura) - 44.7;
    printf("O seu peso ideal e: \n %.2fkg se voce for homem \n %.2fkg se voce for mulher \n",pesoIdealH, pesoIdealM);
    
    return 0;
}