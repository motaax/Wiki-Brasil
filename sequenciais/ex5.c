#include <stdio.h>

int main() {
    float metros, centimetros;

    printf("Digite a medida em metros: \n");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("%.2fm correspondem a %.2fcm", metros, centimetros);

    return 0;
}