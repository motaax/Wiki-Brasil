#include <stdio.h>

int main() {
    int N;
    double H = 0.0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        H += 1.0 / i;
    }

    printf("O valor de H com %d termos e: %.6lf\n", N, H);

    return 0;
}