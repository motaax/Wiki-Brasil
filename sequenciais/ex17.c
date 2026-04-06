#include <stdio.h>
#include <math.h>

int main() {
    float metrosQuadrados, metrosQuadradosMaisDez, rendimentoLitro = 6.0, litrosLata = 18.0, precoLata = 80.0, rendimentoLata = rendimentoLitro * litrosLata, litrosGalao = 3.6, precoGalao = 25.0, rendimentoGalao = rendimentoLitro * litrosGalao, precoSomenteLatas, precoSomenteGaloes, precoLatas, precoGaloes, precoLatasEGaloes;

    int somenteLatas, somenteGaloes, latas, galoes;

    printf("Digite a área em m² a ser pintada: \n");
    scanf("%f", &metrosQuadrados);

    metrosQuadradosMaisDez = metrosQuadrados * 1.1;

    somenteLatas = ceil(metrosQuadrados / rendimentoLata);
    somenteGaloes = ceil(metrosQuadrados / rendimentoGalao);
    latas = floor(metrosQuadradosMaisDez / rendimentoLata);
    galoes = ceil(((int)metrosQuadradosMaisDez % (int)rendimentoLata) / rendimentoGalao);

    precoSomenteLatas = somenteLatas * precoLata;
    precoSomenteGaloes = somenteGaloes * precoGalao;
    precoLatas = latas * precoLata;
    precoGaloes = galoes * precoGalao;
    precoLatasEGaloes = precoLatas + precoGaloes;

    printf("Somente Latas: %i, custando R$%.2f\n", somenteLatas, precoSomenteLatas);
    printf("Somente Galões: %i, custando R$%.2f\n", somenteGaloes, precoSomenteGaloes);
    printf("Latas: %i , Galões: %i, custando R$%.2f", latas, galoes, precoLatasEGaloes);

    return 0;
}