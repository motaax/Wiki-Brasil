#include <stdio.h>

int main() {
    char nome[50], senha[50];
    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("Digite a sua senha: \n");
    scanf("%s", &senha);

    while(!strcmp(nome, senha)) {
        printf("Nome de usuario nao pode ser igual a senha! \n");
        printf("Digite o nome de usuario: \n");
        scanf("%s", nome);
        
        printf("Digite a senha: \n");
        scanf("%s", senha);
    }

    return 0;
}