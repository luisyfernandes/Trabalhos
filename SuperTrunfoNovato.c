#include <stdio.h>

int main () {

    // Estrutura para armazenar os dados de uma carta
    char estado;
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Bem-vindo ao Super Trunfo.\n\n");
    printf("Vamos começar cadastrando os dados de duas cidades.\n\n");

    // Cadastro da primeira cidade
    printf("Cadastro da primeira carta:\n");

    printf("Escolha uma letra para representar o Estado - escolha entre a letra 'A' a 'H': \n");
    scanf(" %c", &estado);

    printf("Escolha um código da Carta utilizando a letra escolhida para representar o Estado - ex. A01, B02: \n");
    scanf("%s", codigo);

    printf("Informe o nome de uma Cidade que pertença a este estado: \n");
    scanf(" %49[^\n]", cidade);

    printf("Informe o número populacional desta cidade: \n");
    scanf("%d", &populacao);

    printf("Informe a área em km² desta cidade: \n");
    scanf(" %f", &area);

    printf("Informe o PIB: \n");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("\n\nInformações Salvas da Carta 1:\n\n");

    // Exibir os dados da primeira carta
    printf("\nEstado: %c", estado);
    printf("\nCódigo: %s", codigo);
    printf("\nNome da Cidade: %s", cidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2f km²", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos);

    printf("\n\n");

    // Cadastro da segunda cidade
    printf("Cadastro da segunda carta:\n");

    printf("Escolha uma letra para representar o Estado - escolha entre a letra 'A' a 'H': \n");
    scanf(" %c", &estado);

    printf("Escolha um código da Carta utilizando a letra escolhida para representar o Estado - ex. A01, B02: \n");
    scanf("%s", codigo);

    printf("Informe o nome de uma Cidade que pertença a este estado: \n");
    scanf(" %49[^\n]", cidade);

    printf("Informe o número populacional desta cidade: \n");
    scanf("%d", &populacao);

    printf("Informe a área em km² desta cidade: \n");
    scanf(" %f", &area);

    printf("Informe o PIB: \n");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("\n\nInformações Salvas da Carta 2:\n\n");

    // Exibir os dados da segunda carta
    printf("\nEstado: %c", estado);
    printf("\nCódigo: %s", codigo);
    printf("\nNome da Cidade: %s", cidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2f km²", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos);

    return 0;
}
