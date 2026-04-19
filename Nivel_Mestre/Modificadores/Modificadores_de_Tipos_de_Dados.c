#include <stdio.h>
/*
Unsigned - Intervalo de valores
(unsigned pode ser tanto para inteiro quanto para char)

int: -2.147,483,647(Dois bilhões cento e quarenta e sete milhões quatrocentos e oitenta e três mil seicentos e quarenta e sete)
(Trabalha com valores positivos e negativos).

Unsigned int: 0 a 4,294,967,295
(Não trabalha com valores negativos somente positivos)

char: -128 a 127

unsigned char: 0 a 255
*/
int main() {
    int numeroSinal = 3000000000; //Estevalo excede o limite de um int normal.
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);

    return 0;

}
//repetindo unsigned pode ser usado para inteiro ou para char