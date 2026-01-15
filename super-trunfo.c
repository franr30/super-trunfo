#include <stdio.h>

struct Carta {
    char estado[3];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
};

int main() {

    struct Carta carta1;

    sprintf(carta1.estado, "SP");
    sprintf(carta1.codigo, "A01");
    sprintf(carta1.nomeCidade, "Sao Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 828000;
    carta1.pontosTuristicos = 50;

    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    struct Carta carta2;

    sprintf(carta2.estado, "RJ");
    sprintf(carta2.codigo, "B02");
    sprintf(carta2.nomeCidade, "Rio de Janeiro");
    carta2.populacao = 6000000;
    carta2.area = 1182.30;
    carta2.pib = 461000;
    carta2.pontosTuristicos = 30;

    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n",
           carta1.nomeCidade,
           carta1.estado,
           carta1.populacao);

    printf("Carta 2 - %s (%s): %d\n\n",
           carta2.nomeCidade,
           carta2.estado,
           carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    }
    else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    }
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
