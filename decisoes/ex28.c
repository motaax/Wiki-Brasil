#include <stdio.h>

int main() {
    char M, V, N;
    printf("Digite em qual turno voce estuda: (M, V, N) \n");
    scanf("%c", &M);
    scanf("%c", &V);
    scanf("%c", &N);

    if(M == 'M') {
        printf("Bom dia! \n");
    } else if(V == 'V') {
        printf("Boa tarde! \n");
    } else if(N == 'N') {
        printf("Boa noite! \n");
    } else {
        printf("Valor invalido! \n");
    }

    return 0;
}