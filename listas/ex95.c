#include <stdio.h>

int main() {
    char caracteres[10];
    int consoantes = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um caractere: ");
        scanf("%c", &caracteres[i]);
        getchar();
    }

    for (int i = 0; i < 10; i++){
        char c = caracteres[i];
        if (c > 'Z')
            c -= 'a' - 'A';
        if (c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
            consoantes++;
    }
    
    printf("Foram lidas %d consoantes.", consoantes);

    return 0;
}