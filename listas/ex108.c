#include <stdio.h>

float percentual(int votos, int total) {
    return (votos * 100.0) / total;
}

int main() {
    int votos[7] = {0}; 
    int opcao, total = 0;

    char *sistemas[7] = {
        "",
        "Windows Server",
        "Unix",
        "Linux",
        "Netware",
        "Mac OS",
        "Outro"
    };

    printf("Qual o melhor Sistema Operacional para servidores?\n");
    printf("1- Windows Server\n2- Unix\n3- Linux\n4- Netware\n5- Mac OS\n6- Outro\n");
    printf("Digite 0 para encerrar.\n\n");

    while (1) {
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0)
            break;

        if (opcao < 1 || opcao > 6) {
            printf("Valor invalido! Digite entre 1 e 6 ou 0 para sair.\n");
            continue;
        }

        votos[opcao]++;
        total++;
    }

    printf("\nSistema Operacional\tVotos\t%%\n\n");

    int vencedor = 1;
    int maior = votos[1];

    for (int i = 1; i <= 6; i++) {
        float p = 0;
        if (total > 0)
            p = percentual(votos[i], total);

        printf("%-20s\t%d\t%.0f%%\n", sistemas[i], votos[i], p);

        if (votos[i] > maior) {
            maior = votos[i];
            vencedor = i;
        }
    }

    printf("\nTotal\t\t\t%d\n", total);

    if (total > 0) {
        float p = percentual(maior, total);
        printf("\nO Sistema Operacional mais votado foi o %s, com %d votos, correspondendo a %.0f%% dos votos.\n",
               sistemas[vencedor], maior, p);
    }

    return 0;
}