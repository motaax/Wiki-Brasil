#include <stdio.h>

int main() {
    int alturaAlto = 0, alunoAlto = 0, alturaBaixo = 200, alunoBaixo = 0, altura;

    for(int i = 1; i <= 10; i++) {
        printf("Digite a altura do aluno %d em cm: \n", i);
        scanf("%d", &altura);

        if(altura > alturaAlto) {
            alunoAlto = i;
            alturaAlto = altura;
        } if (altura < alturaBaixo) {
            alunoBaixo = i;
            alturaAlto = altura;
        }

    }

    printf("O mais alto é o aluno %d com %dcm \n", alunoAlto, alturaAlto);
    printf("\nO mais baixo é o aluno %d com %dcm \n", alunoBaixo, alturaBaixo);

    return 0;
}