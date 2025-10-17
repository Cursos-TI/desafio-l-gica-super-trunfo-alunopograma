#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
 char estado1 = 'A',                        estado2 = 'b';
    char codigo1[4] = "A01",                   codigo2[4] = "B02";
    char cidade1[50] = "Ceará",                cidade2[50] = "Fortaleza";
    unsigned long int populacao1 = 1000,       populacao2 = 2000;
    float area1 = 2000.0,                      area2 = 3000.0;
    float pib1 = 12000.0,                      pib2 = 20000.0;
    int pontos_turisticos1 = 20,               pontos_turisticos2 = 25;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

                // --- PASSO 2: Entrada dos dados da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a População: ");
    scanf("%lu", &populacao1);
    printf("Digite a Área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib1);
    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // --- PASSO 3: Entrada dos dados da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    printf("Digite a Área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib2);
    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2); 





    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
     
    







    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
