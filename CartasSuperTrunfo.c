#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.


int main() {

    //Variáveis da carta 1: informações sobre o primeiro estado e cidade.

    char estado1[50];
    char cidade1[50];
    char codigo1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Variáveis da carta 2: informações sobre o segundo estado e cidade.

    char estado2[50];
    char cidade2[50];
    char codigo2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    //Inserção de dados da carta 1 pelo jogador.

    printf("Coloque os dados da carta 1. \n");
    printf("Estado: ");
    scanf("%s", &estado1);
    printf("Cidade: ");
    scanf("%s", &cidade1);
    printf("Código: ");
    scanf("%s", &codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //Resultado das informações inseridas pelo jogador sobre a carta 1.

    printf("\nEsses são os dados da carta 1:");
    printf("\nEstado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %d - Área: %.2f Km² - PIB: R$ %.2f\n", populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos1);

    //Inserção de dados da carta 2 pelo jogador.

    printf("Coloque os dados da carta 2. \n");
    printf("Estado: ");
    scanf("%s", &estado2);
    printf("Cidade: ");
    scanf("%s", &cidade2);
    printf("Código: ");
    scanf("%s", &codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Resultado das informações inseridas pelo jogador sobre a carta 2.

    printf("\nEsses são os dados da carta 2:");
    printf("\nEstado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d - Área: %.2f Km² - PIB: R$ %.2f\n", populacao2, area2, pib2);
    printf("Pontos Turísticos: %d", pontosTuristicos2);

    return 0;
}
