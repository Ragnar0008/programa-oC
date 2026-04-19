#include <stdio.h>

int main() {
    //produtos
    char Produto1[30] = "Shampoo";
    char Produto2[30] = "Gel";

   //qunatidade em estoque
    unsigned int estoqueShampoo = 9500;
    unsigned int estoqueGel = 7000;

    //valor unitário
    float valorShampoo = 4.65;
    float valorGel = 5.90;

//nesssas três variáveis float, unsigned e char imprimi no printf1 abaixo:

    //Estoque mínimo para cada produto
    unsigned estoqueMinimoShampoo = 2500;
    unsigned estoqueMinimoGel = 1000;

    //Valor total de cada estoque
    double valorTotalShampoo;
    double valorTotalGel;

    int resultadoShampoo, resultadoGel;

    //printf1
    printf("Produto: %s - Estoque: %u - Valor unitário: R$ %.2f\n", Produto1, estoqueShampoo, valorShampoo);
    printf("Produto: %s - Estoque: %u - Valor unitário: R$ %.2f\n", Produto2, estoqueGel, valorGel);

    resultadoShampoo = estoqueShampoo > estoqueMinimoShampoo;
    resultadoGel = estoqueGel > estoqueMinimoGel;

    //Comparação de estoque total com estoque mínimo(se o estoque total estiver abaixo do estoque mínimo, resultado será 0. Se não, será 1).
    printf("O %s tem estoque mínimo; %d\n", Produto1, resultadoShampoo);
    printf("O %s tem estoque mínimo: %d\n", Produto2, resultadoGel);

    //Calculando o valor total de cada produto e comparando estoque de produto1 com o de produto2 para saber se ele é > ou <.
   
   /*
    float resultado1, resultado2;
    resultado1 = estoqueShampoo * valorShampoo;
    resultado2 = estoqueGel * valorGel;

    printf("O valor total de shampoos é: R$ %.2f\n", resultado1);
//printf("O valor total de shampoos é: R$ %.2f\n", (estoqueShampoo * valorShampoo));
    printf("O valor total de Géis é: R$ %.2f\n", resultado2);
//printf("O valor total de Géis é: R$ %.2f\n", (estoqueGel * valorGel));
*/
    printf("Valor total de shampoos (R$ %.2f) é maior que o valor total de géis (R$ %.2f) ?: %d\n",
                estoqueShampoo * valorShampoo,          estoqueGel * valorGel,
                    (estoqueShampoo * valorShampoo) > (estoqueGel * valorGel));
                                             







}