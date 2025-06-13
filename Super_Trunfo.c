#include <stdio.h>

// Definições de tamanho para strings
#define TAM_COD 10
#define TAM_NOME 100

int main() {
    char estado1, estado2;
    char codigo_carta1[TAM_COD], codigo_carta2[TAM_COD];
    char nome_cidade1[TAM_NOME], nome_cidade2[TAM_NOME];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int n_ptos_tur1, n_ptos_tur2;

    // Coleta de Dados da carta 1
    printf("Digite os dados da carta 1, de acordo com os itens solicitados:\n");

    printf("Digite uma letra para o estado da carta 1 (Letras validas: A a H): ");
    scanf(" %c", &estado1); 

    printf("Digite o código da carta 1, sendo uma letra e dois números (01 a 04): ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade 1: ");
    scanf(" %s", nome_cidade1); 

    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade 1 (em quilômetros quadrados): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1:");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &n_ptos_tur1);


    // Coleta de Dados da carta 2
    printf("\nDigite os dados da carta 2, de acordo com os itens solicitados:\n");
    getchar();

    printf("Digite uma letra para o estado da carta 2(Letras validas: A a H): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o código da carta 2, sendo uma letra e dois números (01 a 04): ");
    scanf("%s", codigo_carta2);
    getchar();

    printf("Digite o nome da cidade 2: ");
    scanf(" %s", nome_cidade2);

    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 2(em quilômetros quadrados): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &n_ptos_tur2);

    // Imprimir Relatorio da Carta 1
    printf("\nDados relativos à carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n ", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", n_ptos_tur1);

    // Imprimir Relatorio da Carta 2
    printf("\nDados relativos à carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", n_ptos_tur2);

    return 0; 
}
