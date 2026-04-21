#include <stdio.h>

int main() {
    int v1[10], v2[10], v3[10], v4[30];
    int i, j = 0;

    printf("Digite 10 valores para o vetor 1:\n");
    for(i = 0; i < 10; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    printf("\nDigite 10 valores para o vetor 2:\n");
    for(i = 0; i < 10; i++) {
        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }

    printf("\nDigite 10 valores para o vetor 3:\n");
    for(i = 0; i < 10; i++) {
        printf("v3[%d]: ", i);
        scanf("%d", &v3[i]);
    }

    for(i = 0; i < 10; i++) {
        v4[j++] = v1[i];
        v4[j++] = v2[i];
        v4[j++] = v3[i];
    }

    printf("\nVetor intercalado:\n");
    for(i = 0; i < 30; i++) {
        printf("%d ", v4[i]);
    }

    printf("\n");

    return 0;
}