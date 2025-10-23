#include <stdio.h>
#include <stdlib.h>


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
    printf("Carta 1 - %s (%s), :\n", cidade1, estado1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("  PIB per capita: R$ %.2f\n", pib_per_capita1);

    printf("Carta 2 - %s (%s) :\n", cidade2, estado2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("  PIB per capita: R$ %.2f\n\n", pib_per_capita2);

    // Comparação pelo atributo escolhido: PIB per capita
    printf("Comparação de cartas (Atributo: PIB per capita):\n");
    printf("Carta 1 - %s (%s) : R$ %.2f\n", cidade1, estado1, pib_per_capita1);
    printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, estado2, pib_per_capita2);

    // Determinação da carta vencedora
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 :%s  venceu!\n", cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 : %s venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

   // ##### menu de comparação de cartas #####

   int opcao;

   printf("\n=== SUPER TRUNFO: COMPARAÇÃO de cartas ===\n");
   printf("Escolha a carta 1 a 6:\n");
   printf("1 - População\n");
   printf("2 - Área\n");
   printf("3 - PIB\n");
   printf("4 - Pontos Turísticos\n");
   printf("5 - Densidade Populacional\n");
   printf("6 - PIB per capita\n");
   printf("Digite sua opção: ");
   scanf("%d", &opcao);

    printf("\nComparando: %s (%s) vs %s (%s)\n", cidade1, estado1, cidade2, estado2);



   switch (opcao) {
   case 1:
    printf("População:\n");
    printf("%s: %d\n", cidade1, populacao1);
    printf("%s: %d\n", cidade2, populacao2);
    if (populacao1 > populacao2)
    printf("Vencedor: %s\n", cidade1);
    else if (populacao2 > populacao1)
    printf("Vencedor: %s\n", cidade2);
    else
    printf("Empate!\n");
    break;

    case 2:
    printf("Área:\n");
    printf("%s: %.2f km²\n", cidade1, area1);
    printf("%s: %.2f km²\n", cidade2, area2);
    if (area1 > area2)
    printf("Vencedor: %s\n", cidade1);
    else if (area2 > area1)
    printf("Vencedor: %s\n", cidade2);
    else
    printf("Empate!\n");
    break;
    case 3:
    printf("PIB:\n");
    printf("%s: R$ %.2f\n", cidade1, pib1);
    printf("%s: R$ %.2f\n", cidade2, pib2);
    if (pib1 > pib2)
    printf("Vencedor: %s\n", cidade1);
    else if (pib2 > pib1)
    printf("Vencedor: %s\n", cidade2);
    else
    printf("Empate!\n");
    break;

    case 4:
    printf("Pontos Turísticos:\n");
    printf("%s: %d\n", cidade1, pontos_turisticos1);
    printf("%s: %d\n", cidade2, pontos_turisticos2);
    if (pontos_turisticos1 > pontos_turisticos2)
    printf("Vencedor: %s\n", cidade1);
    else if (pontos_turisticos2 > pontos_turisticos1)
    printf("Vencedor: %s\n", cidade2);
    else
    printf("Empate!\n");
    break;

    case 5:
    printf("Densidade Populacional:\n");
    printf("%s: %.2f hab/km²\n", cidade1, densidade1);
    printf("%s: %.2f hab/km²\n", cidade2, densidade2);
    if (densidade1 < densidade2)
    printf("Vencedor: %s\n", cidade1);
    else if (densidade2 < densidade1)
    printf("Vencedor: %s\n", cidade2);
    else
    printf("Empate!\n");
    break;
    case 6:
    printf("PIB per capita:\n");
    printf("%s: R$ %.2f\n", cidade1, pib_per_capita1);
    printf("%s: R$ %.2f\n", cidade2, pib_per_capita2);
    if (pib_per_capita1 > pib_per_capita2)
    printf("Vencedor: %s\n", cidade1);
    else if (pib_per_capita2 > pib_per_capita1)
    printf("Vencedor: %s\n", cidade2);
    else
    printf("Empate!\n");
    break;

    default:
    printf("Opção inválida! Tente novamente.\n");
    break;
    
    }







    

    return 0;
}