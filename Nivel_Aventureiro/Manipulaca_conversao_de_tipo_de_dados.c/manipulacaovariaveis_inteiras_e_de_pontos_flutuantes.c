#include <stdio.h>

int main() {
   /*
   variáveis inteiras
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a *b;
    int quociente = a / b; // Note que a divisão de inteiros resulta em um número inteiro 
*/
    //variáveis de ponto flutuante tipo float
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y; 
    float quociente = x / y; //Divisão de ponto flutuante

   /*
   variáveis inteiras
    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quonciente: %d\n", quociente);
   */
    
    //ponto flutuante tipo float
    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quonciente: %.2f\n", quociente);

    }