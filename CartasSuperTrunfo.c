#include <stdio.h>
#include <string.h>

// Definição da estrutura para armazenar os dados de uma carta
//Super Trunfo em c: Fundamentos e Técnicas Avançadas
typedef struct {
    char estado[3];
    char codigo[10];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;

// Função para calcular a densidade populacional e o PIB per capita
void calcularAtributos(Carta *c) {
    c->densidadePopulacional = c->populacao / c->area;
    c->pibPerCapita = c->pib / c->populacao;
    
    // Super Poder: soma de todos os atributos numéricos, invertendo a densidade populacional
    c->superPoder = c->populacao + c->area + c->pib + c->pontosTuristicos + c->pibPerCapita + (1 / c->densidadePopulacional);
}

// Função para ler os dados de uma carta
void lerCarta(Carta *c) {
    printf("Digite o estado (2 letras): ");
    scanf("%s", c->estado);

    printf("Digite o código da carta: ");
    scanf("%s", c->codigo);

    printf("Digite o nome da cidade: ");
    getchar(); // Consumir o ENTER anterior
    fgets(c->nome, sizeof(c->nome), stdin);
    c->nome[strcspn(c->nome, "\n")] = '\0'; // Remover '\n'

    printf("Digite a população: ");
    scanf("%lu", &c->populacao);

    printf("Digite a área (km²): ");
    scanf("%f", &c->area);

    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &c->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontosTuristicos);

    calcularAtributos(c);
}

// Função para comparar dois valores e imprimir o vencedor
void compararEAvisar(const char *atributo, float valor1, float valor2, int menorVence) {
    int resultado = (menorVence) ? (valor1 < valor2) : (valor1 > valor2);
    printf("%s: Carta %d venceu (%d)\n", atributo, resultado ? 1 : 2, resultado);
}

int main() {
    Carta carta1, carta2;

    printf("\n=== Cadastro da Carta 1 ===\n");
    lerCarta(&carta1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    lerCarta(&carta2);

    printf("\n=== Comparação de Cartas ===\n");
    compararEAvisar("População", carta1.populacao, carta2.populacao, 0);
    compararEAvisar("Área", carta1.area, carta2.area, 0);
    compararEAvisar("PIB", carta1.pib, carta2.pib, 0);
    compararEAvisar("Pontos Turísticos", carta1.pontosTuristicos, carta2.pontosTuristicos, 0);
    compararEAvisar("Densidade Populacional", carta1.densidadePopulacional, carta2.densidadePopulacional, 1);
    compararEAvisar("PIB per Capita", carta1.pibPerCapita, carta2.pibPerCapita, 0);
    compararEAvisar("Super Poder", carta1.superPoder, carta2.superPoder, 0);

    return 0;
}
