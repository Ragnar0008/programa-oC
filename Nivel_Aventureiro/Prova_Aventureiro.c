//Prova(desafio) Aventureiro:

#include <stdio.h>

int main() {
    char estado;
    char codigo [4];
    char nome_da_cidade [20];
    float populacao;
    float areakm2;
    float pib;
    int numero_de_pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    



    printf("***Carta numero1\n***");
    
    printf("Digite o Estado: ");
    scanf("%c", &estado);
    printf("O estado é: %c\n", estado);

    printf("Digite o código da cidade: ");
    scanf("%s", &codigo);
    printf("O código é: %s\n", codigo);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nome_da_cidade);
    printf("O Nome da Cidade é: %s\n", nome_da_cidade);

    printf("Digite a população: ");
    scanf("%f", &populacao);
    printf("A população é de: %f\n", populacao);

    printf("Digite a áreakm2: ");
    scanf("%f", &areakm2);
    printf("A área km2 é de: %f\n", areakm2);

    printf("Digite o pib: ");
    scanf("%f", &pib);
    printf("O pib é de: %f\n", pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos);
    printf("O número de pontos turísticos é: %d\n", numero_de_pontos_turisticos);

    //calculando o pib per capita:
    pib_per_capita = (float) pib / populacao;
    printf("O pib per capita é: %.2f\n", pib_per_capita);

    //calculando a densidade populacional:
    densidade_populacional = (float) populacao / areakm2;
    printf("A densidade populacional é: %.2f\n", densidade_populacional);

    
    printf("***Carta número 2\n***");
    
    printf("Digite o Estado: ");
    scanf(" %c", &estado);
    printf("O estado é: %c\n", estado);

    printf("Digite o código da cidade: ");
    scanf("%s", &codigo);
    printf("O código é: %s\n", codigo);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nome_da_cidade);
    printf("O Nome da Cidade é: %s\n", nome_da_cidade);

    printf("Digite a população: ");
    scanf("%f", &populacao);
    printf("A população é de: %f\n", populacao);

    printf("Digite a áreakm2: ");
    scanf("%f", &areakm2);
    printf("A área km2 é de: %f\n", areakm2);

    printf("Digite o pib: ");
    scanf("%f", &pib);
    printf("O pib é de: %f\n", pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos);
    printf("O número de pontos turísticos é: %d\n", numero_de_pontos_turisticos);

    //calculando o pib per capita:
    //pib / poppulação
    pib_per_capita = (float) pib / populacao;
    printf("O pib per capita é: %.2f\n", pib_per_capita);

    //calculando a densidade populacional:
    //população / area km2
    densidade_populacional = (float) populacao / areakm2;
    printf("A densidade populacional é: %.2f\n", densidade_populacional);




}