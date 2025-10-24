#include <stdio.h>
#include <stdlib.h>

// Função para retornar o nome do atributo
const char* nome_atributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Populacional";
        case 6: return "PIB per capita";
        default: return "Desconhecido";
    }
}

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

    // === DESAFIO 1 ===
    printf("Carta 1 - %s (%s):\n", cidade1, estado1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("  PIB per capita: R$ %.2f\n", pib_per_capita1);

    printf("Carta 2 - %s (%s):\n", cidade2, estado2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("  PIB per capita: R$ %.2f\n\n", pib_per_capita2);

    printf("Comparação de cartas (Atributo: PIB per capita):\n");
    printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, estado1, pib_per_capita1);
    printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, estado2, pib_per_capita2);

    if (pib_per_capita1 > pib_per_capita2)
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    else if (pib_per_capita2 > pib_per_capita1)
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    else
        printf("Resultado: Empate!\n");

    // === DESAFIO 2 ===
    int opcao;
    printf("\n=== SUPER TRUNFO: COMPARAÇÃO DE CARTAS ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparando: %s (%s) vs %s (%s)\n", cidade1, estado1, cidade2, estado2);

    switch (opcao) {
        case 1:
            printf("População:\n");
            printf("%s: %d\n%s: %d\n", cidade1, populacao1, cidade2, populacao2);
            printf("Vencedor: %s\n", populacao1 > populacao2 ? cidade1 : (populacao2 > populacao1 ? cidade2 : "Empate!"));
            break;
        case 2:
            printf("Área:\n");
            printf("%s: %.2f km²\n%s: %.2f km²\n", cidade1, area1, cidade2, area2);
            printf("Vencedor: %s\n", area1 > area2 ? cidade1 : (area2 > area1 ? cidade2 : "Empate!"));
            break;
        case 3:
            printf("PIB:\n");
            printf("%s: R$ %.2f\n%s: R$ %.2f\n", cidade1, pib1, cidade2, pib2);
            printf("Vencedor: %s\n", pib1 > pib2 ? cidade1 : (pib2 > pib1 ? cidade2 : "Empate!"));
            break;
        case 4:
            printf("Pontos Turísticos:\n");
            printf("%s: %d\n%s: %d\n", cidade1, pontos_turisticos1, cidade2, pontos_turisticos2);
            printf("Vencedor: %s\n", pontos_turisticos1 > pontos_turisticos2 ? cidade1 : (pontos_turisticos2 > pontos_turisticos1 ? cidade2 : "Empate!"));
            break;
        case 5:
            printf("Densidade Populacional:\n");
            printf("%s: %.2f hab/km²\n%s: %.2f hab/km²\n", cidade1, densidade1, cidade2, densidade2);
            printf("Vencedor: %s\n", densidade1 < densidade2 ? cidade1 : (densidade2 < densidade1 ? cidade2 : "Empate!"));
            break;
        case 6:
            printf("PIB per capita:\n");
            printf("%s: R$ %.2f\n%s: R$ %.2f\n", cidade1, pib_per_capita1, cidade2, pib_per_capita2);
            printf("Vencedor: %s\n", pib_per_capita1 > pib_per_capita2 ? cidade1 : (pib_per_capita2 > pib_per_capita1 ? cidade2 : "Empate!"));
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    // === DESAFIO FINAL ===
    int atributo1, atributo2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;

    printf("\n=== DESAFIO FINAL: COMPARAÇÃO COM DOIS ATRIBUTOS ===\n");

    printf("Escolha o primeiro atributo:\n");
    for (int i = 1; i <= 6; i++) {
        printf("%d - %s\n", i, nome_atributo(i));
    }
    printf("Digite sua opção: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i != atributo1) {
            printf("%d - %s\n", i, nome_atributo(i));
        }
    }
    printf("Digite sua opção: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 6 || atributo2 < 1 || atributo2 > 6) {
        printf("Erro: atributos inválidos ou repetidos.\n");
        return 1;
    }

    // Coleta dos valores
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontos_turisticos1; valor1_carta2 = pontos_turisticos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = pib_per_capita1; valor1_carta2 = pib_per_capita2; break;
    }
switch (atributo2) {
    case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
    case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
    case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
    case 4: valor2_carta1 = pontos_turisticos1; valor2_carta2 = pontos_turisticos2; break;
    case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
    case 6: valor2_carta1 = pib_per_capita1; valor2_carta2 = pib_per_capita2; break;
    default:
        printf("Erro: atributo inválido.\n");
        return 1;
}
// Exibição dos valores
printf("\nComparando %s (%s) vs %s (%s):\n", cidade1, estado1, cidade2, estado2);
printf("Atributo 1 - %s:\n  %s: %.2f\n  %s: %.2f\n", nome_atributo(atributo1), cidade1, valor1_carta1, cidade2, valor1_carta2);
printf("Atributo 2 - %s:\n  %s: %.2f\n  %s: %.2f\n", nome_atributo(atributo2), cidade1, valor2_carta1, cidade2, valor2_carta2);

// Comparação individual
printf("\nResultado por atributo:\n");

if (atributo1 == 5)
    printf("Vencedor em %s: %s\n", nome_atributo(atributo1),
           valor1_carta1 < valor1_carta2 ? cidade1 :
           (valor1_carta2 < valor1_carta1 ? cidade2 : "Empate"));
else
    printf("Vencedor em %s: %s\n", nome_atributo(atributo1),
           valor1_carta1 > valor1_carta2 ? cidade1 :
           (valor1_carta2 > valor1_carta1 ? cidade2 : "Empate"));

if (atributo2 == 5)
    printf("Vencedor em %s: %s\n", nome_atributo(atributo2),
           valor2_carta1 < valor2_carta2 ? cidade1 :
           (valor2_carta2 < valor2_carta1 ? cidade2 : "Empate"));
else
    printf("Vencedor em %s: %s\n", nome_atributo(atributo2),
           valor2_carta1 > valor2_carta2 ? cidade1 :
           (valor2_carta2 > valor2_carta1 ? cidade2 : "Empate"));

// Soma dos atributos
float soma1 = valor1_carta1 + valor2_carta1;
float soma2 = valor1_carta2 + valor2_carta2;

printf("\nSoma dos atributos:\n");
printf("%s: %.2f\n", cidade1, soma1);
printf("%s: %.2f\n", cidade2, soma2);

// Resultado final
printf("\nResultado final: %s venceu!\n",
       soma1 > soma2 ? cidade1 :
       (soma2 > soma1 ? cidade2 : "Empate!"));

return 0;
}