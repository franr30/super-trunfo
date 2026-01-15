#include <stdio.h>

struct Carta {
    char pais[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
};

int main() {

    struct Carta carta1;
    sprintf(carta1.pais, "Brasil");
    carta1.populacao = 203000000;
    carta1.area = 8515767;
    carta1.pib = 1920000;
    carta1.pontosTuristicos = 50;
    carta1.densidade = carta1.populacao / carta1.area;

    struct Carta carta2;
    sprintf(carta2.pais, "Argentina");
    carta2.populacao = 46000000;
    carta2.area = 2780400;
    carta2.pib = 640000;
    carta2.pontosTuristicos = 30;
    carta2.densidade = carta2.populacao / carta2.area;

    int opcao;

    // menu
    printf("===== SUPER TRUNFO =====\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nComparacao entre %s e %s\n\n", carta1.pais, carta2.pais);

    // comparacao
    switch (opcao) {

        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", carta1.pais, carta1.populacao);
            printf("%s: %d\n", carta2.pais, carta2.populacao);

            if (carta1.populacao > carta2.populacao)
                printf("Resultado: %s venceu!\n", carta1.pais);
            else if (carta2.populacao > carta1.populacao)
                printf("Resultado: %s venceu!\n", carta2.pais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", carta1.pais, carta1.area);
            printf("%s: %.2f\n", carta2.pais, carta2.area);

            if (carta1.area > carta2.area)
                printf("Resultado: %s venceu!\n", carta1.pais);
            else if (carta2.area > carta1.area)
                printf("Resultado: %s venceu!\n", carta2.pais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", carta1.pais, carta1.pib);
            printf("%s: %.2f\n", carta2.pais, carta2.pib);

            if (carta1.pib > carta2.pib)
                printf("Resultado: %s venceu!\n", carta1.pais);
            else if (carta2.pib > carta1.pib)
                printf("Resultado: %s venceu!\n", carta2.pais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", carta1.pais, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.pais, carta2.pontosTuristicos);

            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Resultado: %s venceu!\n", carta1.pais);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("Resultado: %s venceu!\n", carta2.pais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.4f\n", carta1.pais, carta1.densidade);
            printf("%s: %.4f\n", carta2.pais, carta2.densidade);

            // Regra invertida
            if (carta1.densidade < carta2.densidade)
                printf("Resultado: %s venceu!\n", carta1.pais);
            else if (carta2.densidade < carta1.densidade)
                printf("Resultado: %s venceu!\n", carta2.pais);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
