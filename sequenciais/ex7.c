#include <stdio.h>

int main() {
    float lado, area, area2;
    printf("Digite um valor do lado: \n");
    scanf("%f", &lado);

    area = lado * lado;
    printf("A area do quadrado e: %.2f \n", area);

    area2 = area * 2;
    printf("O dobro da area do quadrado e: %.2f \n", area2);

    return 0;
}