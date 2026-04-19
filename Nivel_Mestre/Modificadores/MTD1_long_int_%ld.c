#include <stdio.h>

int main() {
    int numeroNormal = 2147483647; //Valor máximo de int
    long int numeroGrande = 2147483647;

    printf("Número regular (int): %d\n", numeroNormal);
    printf("Número grande (long int): %ld\n", numeroGrande);

    numeroGrande = 2147483648; //valor maior que o máximo de int
    // Aqui o professor acrescentou um número a mais para demonstra a funcionalidade de long
    printf("Numero grande atualizado (long int): %ld\n", numeroGrande);
}