//Nível Amador/Aventureiro:
#include <stdio.h>

int main() {
    char estado1 = 'A', estado2 = 'B';
    char codigo1[4], codigo2[4];
    char nome_da_cidade1 [20], nome_da_cidade2[20];
    unsigned long int populacao1, populacao2;
    float areaKm1, areaKm2;
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    
            
                printf("--------Carta 1--------\n");

printf("Digite o Estado1: \n");
scanf("%c", &estado1);
printf("O Estado1 é: %c\n", estado1);

printf("Digite o Código da Carta1: \n");
scanf("%s", codigo1);
printf("O Código da Carta1 é: %s\n", codigo1);

printf("Digite o Nome da Cidade1: \n");
scanf("%s", nome_da_cidade1);
printf("O Nome da Cidade1 é: %s\n", nome_da_cidade1);

printf("Digite a População1: \n");
scanf("%lu", &populacao1);
printf("A População1 é: %lu\n", populacao1);

printf("Digite a ÁreaKm1: \n");
scanf("%f", &areaKm1);
printf("A Áreakm1 é: %f\n", areaKm1);

printf("Digite o Pib1: \n");
scanf("%f", &pib1);
printf("O Pib1 é: %f\n", pib1);

printf("Digite o Número de Pontos Turísticos1: \n");
scanf("%d", &numero_de_pontos_turisticos1);
printf("O Número de Pontos Turísticos1 é: %d\n", numero_de_pontos_turisticos1);

    //Desafio Aventureiro Cálculo de densidade populacional:
float densidade_populacional1 = populacao1 / areaKm1;
        
printf("A Densidade Populacional1 é: %f\n", densidade_populacional1);
    //Desafio Aventureiro Cálculo de pib per capita:
float pib_per_capita1 = pib1 / populacao1;
printf("O Pib per capita1 é: %f\n", pib_per_capita1);

// Desafio Mestre Cálculo do "Super poder". Soma dos atributos:
float Super_Poder1 = (float) populacao1 + areaKm1 + pib1 + numero_de_pontos_turisticos1+
pib_per_capita1 + (1.0 / densidade_populacional1);
printf("Super Poder da Carta1: %f\n\n", Super_Poder1);

                        printf("--------Carta 2--------\n");

printf("Digite o Estado2: \n");
scanf(" %c", &estado2);
printf("O Estado1 é: %c\n", estado2);

printf("Digite o Código da Carta2: \n");
scanf("%s", codigo2);
printf("O Código da Carta2 é: %s\n", codigo2);

printf("Digite o Nome da Cidade2: \n");
scanf("%s", nome_da_cidade2);
printf("O Nome da Cidade2 é: %s\n", nome_da_cidade2);

printf("Digite a População2: \n");
scanf("%lu", &populacao2);
printf("A Populacao2 é: %lu\n", populacao2);

printf("Digite a AreaKm2: \n");
scanf("%f", &areaKm2);
printf("A ÁreaKm2 é: %f\n", areaKm2);

printf("Digite o Pib2: \n");
scanf("%f", &pib2);
printf("O Pib2 é: %f\n", pib2);

printf("Digite o Número de Pontos Turísticos2: \n");
scanf("%d", &numero_de_pontos_turisticos2);
printf("O Número de Pontos Turísticos2 é: %d\n", numero_de_pontos_turisticos2);
                
    // Desafio aventureiro Cálculo de densidade populacional:
float densidade_populacional2 = populacao2 / areaKm2;
printf("A Densidade Populacional2 é: %f\n", densidade_populacional2);
    ////Desafio aventureiro Cálculo de pib per capita:
float pib_per_capita2 = pib2 / populacao2;
printf("O Pib per capita2 é: %f\n", pib_per_capita2);

        // Desafio Mestre Cálculo do "Super Poder". Soma dos atributos:
float Super_Poder2 = (float) populacao2 + areaKm2 + pib2 + numero_de_pontos_turisticos2 + 
pib_per_capita2 + (1.0 / densidade_populacional2);
printf("O Super Poder da Carta2: %f\n", Super_Poder2);

            printf("\n--------Resultado da Comparação--------\n");

printf("População: Carta1 venceu? %d\n", populacao1 > populacao2);
printf("Área: Carta1 venceu? %d\n", areaKm1 > areaKm2);
printf("Pib: Carta1 venceu? %d\n", pib1 > pib2);
printf("Pontos Turísticos: Carta1 venceu? %d\n", numero_de_pontos_turisticos1 >
     numero_de_pontos_turisticos2);
printf("Pib per capita: Carta1 venceu? %d\n", pib_per_capita1 > pib_per_capita2);
printf("Densidade Populacional: Carta1 venceu? %d\n", densidade_populacional1 < 
    densidade_populacional2);
printf("Super Poder: Carta1 venceu? %d\n", Super_Poder1 > Super_Poder2);





}