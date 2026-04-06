#include <stdio.h>

int main() {
    float raio, area, pi = 3.14;
    printf("Digite o raio: \n");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("A area da circunferencia e: %.2f \n", area);

    return 0;
}