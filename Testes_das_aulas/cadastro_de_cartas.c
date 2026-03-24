#include <stdio.h>

int main() {

char estado;
char codigo_da_carta [4];
char cidade [20];
float pib;
float populacao;
float area_km2;
int numero_de_pontos_turisticos;

//cidade 1
printf("Digite o estado: \n");
scanf("%c", &estado);
printf("O estado é: %c\n", estado);

printf("Digite o código da carta: \n");
scanf("%s", codigo_da_carta);
printf("O código da carta é: %s\n", codigo_da_carta);

printf("Digite a cidade: \n");
scanf("%s", &cidade);
printf("A cidade é: %s\n", cidade);

printf("Digite o pib: \n");
scanf("%f", &pib);
printf("O pib é: %f\n", pib);

printf("Digite a população: \n");
scanf("f", &populacao);
printf("A população é de: %f\n", populacao);

printf("Digite a área em km2: \n");
scanf("%f", &area_km2);
printf("A área km2 é de: %f\n");

printf("Digite o número de pontos turistícos: \n");
scanf("%d", &numero_de_pontos_turisticos);
printf("O número de pontos turisticos é de: %d\n", numero_de_pontos_turisticos);

}
