#include <stdio.h>
#include <string.h>

// Definições de tamanho para strings
#define TAM_COD 10
#define TAM_NOME 100

int main() {
    char estado1, estado2;
    char codigo_carta1[TAM_COD], codigo_carta2[TAM_COD];
    char nome_cidade1[TAM_NOME], nome_cidade2[TAM_NOME];   
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int n_ptos_tur1, n_ptos_tur2;

    // Variáveis de cálculo
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Coleta de dados da carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código (letra + dois números): ");
    scanf("%s", codigo_carta1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome_cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &n_ptos_tur1);

    // Coleta de dados da carta 2
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (letra + dois números): ");
    scanf("%s", codigo_carta2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome_cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &n_ptos_tur2);

    // Cálculos com validação de divisão por zero
    densidade1 = (area1 > 0) ? populacao1 / area1 : 0;
    densidade2 = (area2 > 0) ? populacao2 / area2 : 0;

    pib_per_capita1 = (populacao1 > 0) ? pib1 / populacao1 : 0;
    pib_per_capita2 = (populacao2 > 0) ? pib2 / populacao2 : 0;

    // Super Poder = soma dos atributos numéricos
    super_poder1 = (float)populacao1 + area1 + pib1 + n_ptos_tur1 + pib_per_capita1 + ((densidade1 > 0) ? (1 / densidade1) : 0);
    super_poder2 = (float)populacao2 + area2 + pib2 + n_ptos_tur2 + pib_per_capita2 + ((densidade2 > 0) ? (1 / densidade2) : 0);

    // Impressão dos dados
    printf("\n================== RESULTADOS ==================\n");

    printf("\nCarta 1:\n");
    printf("Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: R$ %.2f bilhões\n", nome_cidade1, populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.6f\nSuper Poder: %.6f\n", 
            n_ptos_tur1, densidade1, pib_per_capita1, super_poder1);

    printf("\nCarta 2:\n");
    printf("Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: R$ %.2f bilhões\n", nome_cidade2, populacao2, area2, pib2);
    printf("Pontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.6f\nSuper Poder: %.6f\n", 
            n_ptos_tur2, densidade2, pib_per_capita2, super_poder2);

    // Comparações
    printf("\n================ COMPARAÇÕES ================\n");

    printf("População: %d\n", populacao1 > populacao2 ? 1 : 0);
    printf("Área: %d\n", area1 > area2 ? 1 : 0);
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: %d\n", n_ptos_tur1 > n_ptos_tur2 ? 1 : 0);
    printf("Densidade Populacional (menor vence): %d\n", densidade1 < densidade2 ? 1 : 0);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2 ? 1 : 0);
    printf("Super Poder: %d\n", super_poder1 > super_poder2 ? 1 : 0);

    return 0;
}
