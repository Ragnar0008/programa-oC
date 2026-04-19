/* #include <stdio.h>

int main() {
    double numeroPreciso = 3.141592653589793;//15 dígitos após o ponto 
    long double numeroMuitoPreciso = 3.141592653589793238463;//21 dígitos após o ponto

    printf("Número preciso (double): %.15f\n", numeroPreciso);
    printf("Numero muito preciso (loug double): %.21llf\n", numeroMuitoPreciso);
    //se eu usar %.21f, %.21f, %.21lf, %.21llf; não terei a precisão de double na linha 5.

    return 0;


}
*/

#include <stdio.h>

int main() {
    double numeroPreciso = 3.141592653589793;//15 dígitos após o ponto 
        double numeroMuitoPreciso = 3.141592653589793238463;//21 dígitos após o ponto

            printf("Número preciso (double): %.15f\n", numeroPreciso);
                printf("Numero muito preciso (loug double): %.21lf\n", numeroMuitoPreciso);
                    //se eu usar %.21f, %.21f, %.21lf, %.21llf; não terei a precisão de double na linha 5.
                        //A menos que eu tire long  de long double da declaraçao de variável e utilize o especificador %.21llf(long long float)
                           //Porém nos dígitos finais no github temos esse problema de precisão 
                        return 0;


}

