#include <stdio.h>
/*
int main() {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float
    // Se a conversão fosse de float para int pode ocorrer perda da parte decimal
    printf("Resultado: %.2f\n", resultado);
    */

    /* Para não haver perdas no resultado do cálculo devemos usar
    //conversão explicita "cating" 
    //forçar a correção de um tipo de dado para outro tipo de dado 
    */
    int main(){
        int a = 10;
        int b = 3;
        float quociente = (float) a / b; // 'a' é explicitamente convertido em float
        //float faz um casting
        
        printf("Quociente: %.2f\n", quociente);
    }