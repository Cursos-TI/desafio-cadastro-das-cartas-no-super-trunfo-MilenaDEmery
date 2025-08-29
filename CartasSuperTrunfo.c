#include <stdio.h>
#include <string.h>

int main() {

// ===== Carta 1 =====
    char estado;
    char codigo_carta[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

// ===== Carta 2 =====
    char estado2;
    char codigo_carta2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

// ===== Entrada de dados da Carta 1 =====
    printf("\n--- Carta 1 ---\n");
    
    printf("Digite uma letra de A a H para o estado: ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (ex: 01): ");
    scanf("%s", codigo_carta);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o nome da cidade: ");
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = 0; // Remove o '\n' do final da string
    
    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao);

    printf("Digite a area em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB em R$: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

// ===== Entrada de dados da Carta 2 =====
    printf("\n--- Carta 2 ---\n");

    printf("Digite uma letra de A a H para o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: 01): ");
    scanf("%s", codigo_carta2);
    getchar(); // Limpar o buffer do teclado

    printf("Digite o nome da cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove o '\n' no final da string

    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em R$: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

// ===== Saída de dados da Carta 1 =====
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %c%s\n", estado, codigo_carta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);


// ===== Saída de dados da carta 2 =====
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %c%s\n", estado2, codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
