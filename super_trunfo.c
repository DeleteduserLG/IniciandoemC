#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados da primeira carta
    char estado_carta1[20], estado_carta2[20];
    char codigo_carta1[5], codigo_carta2[5];
    char nome_cidade1[30], nome_cidade2[30];
    int populacao_carta1, populacao_carta2;
    float area_carta1, area_carta2;
    float pib_carta1, pib_carta2;
    int pontos_turisticos1, pontos_turisticos2;

    // Entrada de dados para a primeira carta
    printf("Vamos comecar o desafio do supertrunfo\n");
    printf("Digite o nome do seu estado: \n");
    scanf("%s", estado_carta1);
    printf("Digite o codigo do estado (ex: A02, B01): \n");
    scanf("%4s", codigo_carta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);
    printf("Digite a populacao do estado: \n");
    scanf("%d", &populacao_carta1);
    printf("Digite a area do estado: \n");
    scanf("%f", &area_carta1);
    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib_carta1);
    printf("Digite o numero de pontos turisticos do estado: \n");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a segunda carta
    printf("Agora os dados para a segunda carta\n");
    printf("Digite o nome do seu estado: \n");
    scanf("%s", estado_carta2);
    printf("Digite o codigo do estado (ex: A02, B01): \n");
    scanf("%4s", codigo_carta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);
    printf("Digite a populacao do estado: \n");
    scanf("%d", &populacao_carta2);
    printf("Digite a area do estado: \n");
    scanf("%f", &area_carta2);
    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib_carta2);
    printf("Digite o numero de pontos turisticos do estado: \n");
    scanf("%d", &pontos_turisticos2);

    // Exibição das informações cadastradas da primeira carta
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado_carta1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao_carta1);
    printf("Area: %.2f km²\n", area_carta1);
    printf("PIB: %.2f\n", pib_carta1);
    printf("Pontos turisticos: %d\n\n", pontos_turisticos1);
    // Exibição das informações cadastradas da segunda carta 
    printf("Carta 2\n");
    printf("Estado: %s\n", estado_carta2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao_carta2);
    printf("Area: %.2f km²\n", area_carta2);
    printf("PIB: %.2f\n", pib_carta2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    
    return 0;
}
