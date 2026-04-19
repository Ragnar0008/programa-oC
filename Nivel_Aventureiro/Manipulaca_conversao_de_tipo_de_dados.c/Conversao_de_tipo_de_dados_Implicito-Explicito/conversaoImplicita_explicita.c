/*
#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float
    // Se a conversão fosse de float para int pode ocorrer perda da parte decimal
    printf("Resultado: %.2f\n", resultado);
    

    /* Para não haver perdas no resultado do cálculo devemos usar
    //conversão explicita "cating" 
    //forçar a correção de um tipo de dado para outro tipo de dado 

    int main(){
        int a = 10;
        int b = 3;
        float quociente = (float) a / b; // 'a' é explicitamente convertido em float
        //float faz um casting
        
        printf("Quociente: %.2f\n", quociente);
    }
    */
  
    //Variáveis Inteiras (int):

    /* #include <stdio.h>

   int main() {
    int a = 10; 
    int b = 3;
    int soma = a + b; 
    int diferenca = a - b;
    int razao = a * b;
    int quociente = a / b;
     
    printf("A soma é: %d\n", soma);
    printf("A diferença é: %d\n", diferenca);
    printf("A razão é: %d\n", razao);
    printf("O quociente é: %d\n", quociente);//A divisão de inteiros resulta em um número inteiro( ao invés de dar 3.3 dá somente 3)

   } */

   //Variáveis de Ponto Flutuante (float):

   /*#include <stdio.h>

   int main() {
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; //divisão de ponto flutuante.

    printf("A soma é: %.2f\n", soma);
    printf("A diferença é: %.2f\n", diferenca);
    printf("A produto é: %.2f\n", produto);
    printf("O quocinete é: %.2f\n", quociente);
   }
    */

    //Conversão Implicita 

   /* #include <stdio.h>

    int main() {
        int a = 10; 
        float b = 3.5;
        float resultado = a + b; // 'a' é convertido implicitamente para float.
        
        printf("Resultado: %.2f\n", resultado);
    }
*/

#include <stdio.h>

int main() {
    int a = 10; 
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertida para float
                        //casting
    printf("Quociente; %.2f\n", quociente);


}

