#include <stdio.h>

//Desfio Super Trufo - Países
//Tema 1 - Cadastro de Cartas
//No nível novato você deve criar as carts representando as cidades utilizando scanf para entrada de dadose printf para exibir as informações .

/*scanf("%formato, variável")

%d Imprime um inteiro no formato decimal.   %i Equivalente a %d.   %f Imprime um número de ponto flutuante.   

%e Imprime um número de ponto flutuante na notação científica.    %c Imprime um único caractere    

%s Imprime uma cadeia (string) de caracteres  */

int main() {
//Área para definição das variáveis para armazenar as propriedades das cidades
//Área paraentrada de dados
    char estado;
    char codigo_da_carta [5];
    char cidade [20];
    float população;
    float area;
    float pib;
    int numerodepontosturisticos;

//Área para exibição dos dados das cidades 

    //                  ("Cidade 01\n");


    printf("Digite o estado: ");
    scanf("%c", &estado);
    printf("O estado é: %c\n", estado);

    printf("Digite o codigo_da_carta: ");
    scanf("%s", &codigo_da_carta);
    printf("O codigo_da_carta é: %s\n", codigo_da_carta);

    printf("Digite a cidade: ");
    scanf("%s", &cidade);
    printf("A cidade é: %s\n", cidade);

    printf("Digite o numero de habitantes: ");
    scanf("%f", &população);
    printf("A população é de: %f\n", população);

    printf("Digite a area em km2: ");
    scanf("%f", &area);
    printf("A area em km2 é: %f\n", area);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);
    printf("O pib da cidade é de: %f\n", pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numerodepontosturisticos);
    printf("O numero de pontos turísticos é de: %d\n", numerodepontosturisticos);


            //              ("Cidade 02\n");
            
            printf("Digite o estado: ");
            scanf(" %c", &estado);
            printf("O estado é: %c\n", estado);

            printf("Digite o código da carta: ");
            scanf(" %s", &codigo_da_carta);
            printf("O código da carta é: %s\n", codigo_da_carta);

            printf("Digite a cidade: ");
            scanf(" %s", &cidade);
            printf("A cidade é: %s\n", cidade);

            printf("Digite o número de habitantes: ");
            scanf("%f", &população);
            printf("O número de habitantes é: %f\n", população);

            printf("Digite a área em km2: ");
            scanf("%f", &area);
            printf("A área em km2 é: %f\n", area);

            printf("Digite o pib da cidade: ");
            scanf("%f", &pib);
            printf("O pib da cidade é: %f\n", pib);

            printf("Digite o número de pontos turísticos: ");
            scanf("%d", &numerodepontosturisticos);
            printf("O número de pontos turísticos é: %d\n", numerodepontosturisticos);

}
