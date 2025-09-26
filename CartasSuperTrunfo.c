#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas das cidades
// Objetivo: No nível novato deve ser criado cartas representando as cidades, utiliza-se scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // -------- Carta da cidade 1 -------- //
    char estado__1;
    char codigo_1[5];   // Ex: A01 (3 caracteres + '\0')
    char cidade_1[20];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;

    // -------- Carta 2 -------- //
    char estado_2;
    char codigo_2[5];
    char cidade_2[20];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;
  
    // Área para entrada de dados da carta cidade 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado_1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade_1); // lê-se string com espaços

    printf("Digite a população: ");
    scanf("%d", &populacao_1);

    printf("Digite a área em km²: ");
    scanf("%f", &area_1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_1);

     // Área para entrada de dados da carta cidade 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado_2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade_2);

    printf("Digite a população: ");
    scanf("%d", &populacao_2);

    printf("Digite a área em km²: ");
    scanf("%f", &area_2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_2);
  
    // Área para exibição dos dados da cidade 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Área para exibição dos dados da cidade 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);

return 0;
} 
