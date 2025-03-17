#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Declaração de variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf("%c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%49s", nomeCidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf("%c", &estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%49s", nomeCidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
