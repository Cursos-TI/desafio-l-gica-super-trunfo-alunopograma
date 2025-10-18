#include <stdio.h>

// Função principal
int main() {
    // Dados da Carta 1
    char estado1[10] = "A";
    char codigo1[4] = "A01";
    char cidade1[50] = "Ceará";
    int populacao1 = 1000;
    float area1 = 2000.0;
    float pib1 = 12000.0;
    int pontos_turisticos1 = 20;

    // Dados da Carta 2
    char estado2[10] = "B";
    char codigo2[4] = "B02";
    char cidade2[50] = "Fortaleza";
    int populacao2 = 20000;
    float area2 = 3000.0;
    float pib2 = 20000.0;
    int pontos_turisticos2 = 25;

    // Cálculo da Densidade Populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Cálculo do PIB per capita
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados calculados
    printf("Carta 1 - %sc, :\n", cidade1, estado1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("  PIB per capita: R$ %.2f\n\n", pib_per_capita1);

    printf("Carta 2 - %s :\n", cidade2, estado2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("  PIB per capita: R$ %.2f\n\n", pib_per_capita2);

    // Comparação pelo atributo escolhido: PIB per capita
    printf("Comparação de cartas (Atributo: PIB per capita):\n");
    printf("Carta 1 - %s : R$ %.2f\n", cidade1, estado1, pib_per_capita1);
    printf("Carta 2 - %s : R$ %.2f\n", cidade2, estado2, pib_per_capita2);

    // Determinação da carta vencedora
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1  venceu!\n", cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2  venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}