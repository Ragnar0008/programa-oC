#include <stdio.h>

int main() {
    //Declarar as variáveis Produto, u i estoque, double valor unitário, double valor total
    // u i quantidade mínima
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";
//Acima foi definido o nome do produto

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;
//Acima foi definido a quantidade em estoque de cada produto

    float valorA = 10.50;
    float valorB = 20.40;
//Acima foi definido o valor individual de cada produto

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;
//Acima foi definido o estoque mínimo para cada produto

    double valorTotalA;
    double valorTotalB;
//Acima foi definido o valor total de cada estoque

    int resultadoA, resultadoB;
//Acima "int resultado" vai armazenar o valor do resultado da compração entre o estoque e o estoque mínimo



    //Exibir as informações dos produtos
    printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor nitário é %.2f\n\n", produtoB, estoqueB, valorB);



    //comparações com valor mínimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n\n", produtoB, resultadoB);



    //Comparação com valor total dos produtos
    printf("Valor total de A (R$ %.2f) é maior que o valor total de B(R$ %.2f): %d\n", estoqueA * valorA,  estoqueB * valorB,
                                                                                     (estoqueA * valorA) > (estoqueB * valorB));
 

}