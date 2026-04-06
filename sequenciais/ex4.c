#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;
    
    printf("Digite a nota do bimestre 1: \n");
    scanf("%f", &nota1);
    printf("Digite a nota do bimestre 2: \n");
    scanf("%f", &nota2);
    printf("Digite a nota do bimestre 3: \n");
    scanf("%f", &nota3);
    printf("Digite a nota do bimestre 4: \n");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A media e: %.2f \n", media);

    return 0;
}