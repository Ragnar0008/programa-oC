  #include <stdio.h>
  //Declarei as variáveis
  int main() {
    char estado1 = 'A', estado2 = 'B';
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade1[20], nome_da_cidade2[20];
    unsigned long int populacao1, populacao2;
    float areaKm1, areaKm2;
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float pib_per_capita1, pib_per_capita2;
    float densidade_populacinal1, densidade_populacional2;
    float super_poder1, super_poder2;

                     //Vou inicializar as variáveis 
                //Desafio Aventureiro:
                    printf("\n________Carta1:________\n");
    
    printf("Digite o Estado1: \n");
    scanf("%c", &estado1);
    printf("O Estado1 é: %c\n", estado1);

    printf("Digite o Código da Carta1: \n");
    scanf("%s", codigo_da_carta1);
    printf("O Código da Carta1 é: %s\n", codigo_da_carta1);

    printf("Digite o Nome da Cidade1: \n");
    scanf("%s", nome_da_cidade1);
    printf("O Nome da Cidade1 é: %s\n", nome_da_cidade1);

    printf("Digite a Quantidade Populacional: \n");
    scanf("%lu", &populacao1);
    printf("A Quantida Populacional1 é: %lu\n", populacao1);

    printf("Digite a ÁreaKm1: \n");
    scanf("%f", &areaKm1);
    printf("A ÁreaKm1 é: %f\n", areaKm1);

    printf("Digite o Pib1: \n");
    scanf("%f", &pib1);
    printf("O Pib1 é: %f\n", pib1);

    printf("Digite o Número de Pontos Turísticos1: \n");
    scanf("%d", &numero_de_pontos_turisticos1);
    printf("O Número de Pontos Turísticos1 é: %d\n", numero_de_pontos_turisticos1);

    pib_per_capita1 = (float) pib1 / populacao1;
    printf("O Pib per Capita1 é: %f\n", pib_per_capita1);

    densidade_populacinal1 = populacao1 / areaKm1;
    printf("A Densidade Populacional1 é: %f\n", densidade_populacinal1);
                            //Nível Mestre:
    super_poder1 = (float) populacao1 + areaKm1 + pib1 + numero_de_pontos_turisticos1 +
    pib_per_capita1 + (1.0 / densidade_populacinal1); 
    printf("O Super Poder da Carta1 é: %f\n", super_poder1);


                        //Desafio Aventureiro
                                printf("\n________Carta2:________\n");
    
    
    printf("Digite o Estado2 \n");
    scanf(" %c", &estado2);
    printf("O Estado2 é: %c\n", estado2);

    printf("Digite o Código da Carta2: \n");
    scanf("%s", codigo_da_carta2);
    printf("O Código da Carta2 é: %s\n", codigo_da_carta2);

    printf("Digite o Nome da Cidade2: \n");
    scanf("%s", nome_da_cidade2);
    printf("O Nome da Cidade2 é: %s\n", nome_da_cidade2);

    printf("Digite a Quantidade Populaciona2: \n");
    scanf("%lu", &populacao2);
    printf("A Quantida Populacional2 é: %lu\n", populacao2);

    printf("Digite a ÁreaKm2: \n");
    scanf("%f", &areaKm2);
    printf("A ÁreaKm2 é: %f\n", areaKm2);

    printf("Digite o Pib2: \n");
    scanf("%f", &pib2);
    printf("O Pib2 é: %f\n", pib2);

    printf("Digite o Número de Pontos Turísticos2: \n");
    scanf("%d", &numero_de_pontos_turisticos2);
    printf("O Número de Pontos Turísticos2 é: %d\n", numero_de_pontos_turisticos2);

    pib_per_capita2 = (float) pib2 / populacao2;
    printf("O Pib per Capita2 é: %f\n", pib_per_capita2);

    densidade_populacional2 = populacao2 / areaKm2;
    printf("A Densidade Populacional2 é: %f\n", densidade_populacional2);
                        
                            //Nível Mestre:
    super_poder2 = (float) populacao2 + areaKm2 + pib2 + numero_de_pontos_turisticos2+
    pib_per_capita2 + (1.0 / densidade_populacional2);
     printf("O Super Poder da Carta2 é: %f\n", super_poder2);


                         printf("\n________**Comparação_das_Cartas_e_Resultados_da_Competição: ***________\n\n");

    printf("População: Carta1 venceu? %d\n", populacao1 > populacao2);
    printf("Área: Carta1 venceu? %d\n", areaKm1 > areaKm2);
    printf("Pib: Carta1 venceu? %d\n", pib1 > pib2);
    printf("Numero de Pontos Turísticos: Carta1 venceu? %d\n", numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2);
    printf("Pib per Capita: Carta1 venceu? %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Densidade Populcional: Carta1 venceu? %d\n", densidade_populacinal1 < densidade_populacional2);
    printf("Super Poder: Carta1 venceu? %d\n", super_poder1 > super_poder2);

   
    return 0;

  }
