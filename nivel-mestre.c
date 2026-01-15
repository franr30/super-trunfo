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
    struct Carta carta2;

    
    sprintf(carta1.pais, "Brasil");
    carta1.populacao = 203000000;
    carta1.area = 8515767;
    carta1.pib = 1920000;
    carta1.pontosTuristicos = 50;
    carta1.densidade = carta1.populacao / carta1.area;

    
    sprintf(carta2.pais, "Argentina");
    carta2.populacao = 46000000;
    carta2.area = 2780400;
    carta2.pib = 640000;
    carta2.pontosTuristicos = 30;
    carta2.densidade = carta2.populacao / carta2.area;

    int attr1, attr2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    printf("===== SUPER TRUNFO - NIVEL MESTRE =====\n\n");

    
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &attr1);

    printf("\nEscolha o SEGUNDO atributo:\n");

    if (attr1 != 1) printf("1 - Populacao\n");
    if (attr1 != 2) printf("2 - Area\n");
    if (attr1 != 3) printf("3 - PIB\n");
    if (attr1 != 4) printf("4 - Pontos Turisticos\n");
    if (attr1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &attr2);

    if (attr1 == attr2) {
        printf("\nErro: atributos iguais nao sao permitidos.\n");
        return 0;
    }

    // Atributo 1
    switch (attr1) {
        case 1:
            valor1_c1 = carta1.populacao;
            valor1_c2 = carta2.populacao;
            break;
        case 2:
            valor1_c1 = carta1.area;
            valor1_c2 = carta2.area;
            break;
        case 3:
            valor1_c1 = carta1.pib;
            valor1_c2 = carta2.pib;
            break;
        case 4:
            valor1_c1 = carta1.pontosTuristicos;
            valor1_c2 = carta2.pontosTuristicos;
            break;
        case 5:
            valor1_c1 = carta1.densidade;
            valor1_c2 = carta2.densidade;
            break;
        default:
            printf("Opcao invalida.\n");
            return 0;
    }

    // Atributo 2
    switch (attr2) {
        case 1:
            valor2_c1 = carta1.populacao;
            valor2_c2 = carta2.populacao;
            break;
        case 2:
            valor2_c1 = carta1.area;
            valor2_c2 = carta2.area;
            break;
        case 3:
            valor2_c1 = carta1.pib;
            valor2_c2 = carta2.pib;
            break;
        case 4:
            valor2_c1 = carta1.pontosTuristicos;
            valor2_c2 = carta2.pontosTuristicos;
            break;
        case 5:
            valor2_c1 = carta1.densidade;
            valor2_c2 = carta2.densidade;
            break;
        default:
            printf("Opcao invalida.\n");
            return 0;
    }

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n===== RESULTADO FINAL =====\n");
    printf("%s\n", carta1.pais);
    printf("Soma dos atributos: %.2f\n\n", soma1);

    printf("%s\n", carta2.pais);
    printf("Soma dos atributos: %.2f\n\n", soma2);

    if (soma1 == soma2)
        printf("Resultado: Empate!\n");
    else
        printf("Resultado: %s venceu!\n",
               soma1 > soma2 ? carta1.pais : carta2.pais);

    return 0;
}
