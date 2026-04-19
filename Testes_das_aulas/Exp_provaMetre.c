#include <stdio.h>

int main() {
    char estado1 = 'A', estado2 = 'B';
    char codigo1[4] = "A01", codigo2[4] = "B02";
    char nome_da_cidade1[20] = "Itaboraí", nome_da_cidade2[20] = "Tanguá"; 
    unsigned long int populacao1 = 1650300, populacao2 = 1755920;
    float areaKm1 = 900, areaKm2 = 950;
    float pib1 = 1259000, pib2 = 1130000;
    int numero_de_pontos_turisticos1 = 27, numero_de_pontos_turisticos2 = 29;
      
    //cálculo para a impressão(Operador aritmético) Nível Aventureiro:
    float densidade_populacional1 = populacao1 / areaKm1, 
          densidade_populacional2 = populacao2 / areaKm2;
      
          //Cálculo incluso (Operador aritmético)Nível Aventureiro:
    float pib_per_capita1 = pib1 / populacao1, 
          pib_per_capita2 = pib2 / populacao2;

                  //Nível Mestre:
      float super_poder1 = (float) populacao1 + areaKm1 + pib1 + numero_de_pontos_turisticos1 +
      pib_per_capita1 + (1.0 / densidade_populacional1);
                  //    1.0 / densidade refere -se ao inverso da densidade populacional_
                  //como foi pedido no desafio
      float super_poder2 = (float) populacao2 + areaKm2 + pib2 + numero_de_pontos_turisticos2 +
      pib_per_capita2 + (1.0 / densidade_populacional2);




                                printf("********Carta 1********\n\n");

printf("O Estado 1 é: %c\n", estado1);
printf("O Código 1 é: %s\n", codigo1);
printf("O Nome da Cidade 1 é: %s\n", nome_da_cidade1);
printf("A População 1 é de: %lu\n", populacao1);
printf("A Área em km 1 é: %f\n", areaKm1);
printf("O Pib 1 é de: %f\n", pib1);
printf("O número de pontos turísticos 1 é: %d\n\n", numero_de_pontos_turisticos1);

//Acrescentados no Desafio Aventureiro :
printf("A Densidade Populacional 1 é de: %f\n", densidade_populacional1);
printf("O Pib per capita 1 é: %f\n\n", pib_per_capita1);


                        printf("********Carta 2********\n");

printf("O Estado 2 é: %c\n", estado2);
printf("O Código 2 é: %s\n", codigo2);
printf("O Nome da Cidade 2 é: %s\n", nome_da_cidade2);
printf("A População 2 é: %lu\n", populacao2);
printf("A Área em km 2 é: %f\n", areaKm2);
printf("O Pib 2 é: %f\n", pib2);
printf("O Número de Pontos Turísticos é: %d\n\n", numero_de_pontos_turisticos2);

//Acrescentados no Desafio Aventureiro:
printf("A Densidade Populacional 2 é de: %f\n", densidade_populacional2);
printf("O Pib per capita 2 é de: %f\n\n", pib_per_capita2);

                           //Desafio Mestre:
            // Calcular "Super Poder" das Cartas somando os_
            //"atributos" e após utilizar variáveis relacionais para pontuá las_
            //e definir a carta vencedora.
printf("Super Poder da Carta 1: %f\n", (float) super_poder1);
printf("Super Poder da Carta 2: %f\n", (float) super_poder2);

             printf("\n---Resultado da Comparação---\n");
printf("População: Carta 1 venceu? %d\n", populacao1 > populacao2);
printf("Área: Carta 1 venceu? %d\n", areaKm1 > areaKm2);
printf("Pib: Carta 1 venceu? %d\n", pib1 > pib2);
printf("Pontos Turísticos: Carta 1 venceu? %d\n", numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2);
printf("Densidade Populaconal: Carta 1 venceu? %d\n", densidade_populacional1 < densidade_populacional2);
printf("Pib per capita: Carta 1 venceu? %d\n", pib_per_capita1 > pib_per_capita2);
printf("Super poder: Carta 1 venceu? %d\n", super_poder1 > super_poder2);
}