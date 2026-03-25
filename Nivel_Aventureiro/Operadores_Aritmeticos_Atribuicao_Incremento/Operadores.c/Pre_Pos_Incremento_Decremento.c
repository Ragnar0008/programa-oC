#include <stdio.h>

int main() {
    /*
    Incremento(++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento(--a)
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes do Incremento: %d\n", numero1);

        resultado = numero1++;
        //Pós-incremento
        printf("Após Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

        resultado = ++numero1;
        //Pré-incremento
        printf("Após Pré-incremwnto - Numero 1: %d - Resultado: %d\n", numero1, resultado);

        resultado = numero1--;
        printf("Após Pós-Decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

        resultado = --numero1;
        printf("Após Pré-Decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

}