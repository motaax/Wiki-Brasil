#include <stdio.h>

int main() {
    char F, M;
    printf("Digite F ou M: \n");
    scanf("%c %c", &F, &M);

    if(F == 'F') {
        printf("Feminino \n");
    } else if(M == 'M') {
        printf("Masculino \n");
    } else {
        printf("Sexo invalido \n");
    }

    return 0;
}