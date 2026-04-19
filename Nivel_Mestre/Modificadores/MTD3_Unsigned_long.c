#include <stdio.h>

int main() {
    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long int numeroGrande = 4000000000;
    //long long int( software VS Code)
    int numero = 4000000000;

    printf("Número positivo grande: %lu\n",numeroGrandePositivo);
    printf("número positivo: %u\n", numeroPositivo);
    printf("número grande: %ld\n", numeroGrande);
    //O visual studio não consegue fazer a leitura correta da linha 6 entao acrescenta-se long lont int
    //long int funciona no github diferente do software do visualstudio code
    printf("Número: %d\n", numero);

    return 0;
}