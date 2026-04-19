#include <stdio.h>
//conversão explícita:
int main() {
    float numero1 = 10.2;
    int numero2 = 10;
    //no começo fiz conversão implicita após, troquei para explicita. Me dando assim resultados diferente de antes da conversão. 

    //printf("numero1 > numero2: %d\n", numero1 > numero2);
    printf("numero1 > numero2: %d\n", (int) numero1 > numero2);
    //printf("numero1 == numero2: %d\n", numero1 == numero2);
    printf("numero1 == numero2: %d\n", (int) numero1 == numero2);


    return 0;

}