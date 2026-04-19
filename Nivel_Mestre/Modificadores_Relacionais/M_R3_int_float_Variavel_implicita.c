#include <stdio.h>
//conversão implicita:
int main() {
    int x = 5;
    float y = 5.0;
    char c = 'a';
    //valor de a natabela ascii é (int)97.

    printf("x >= y: %d\n", x >= y);
    printf("x == y:%d\n", x == y);
    printf("x != y: %d\n", x != y);


    printf("x >= c: %d\n", x >= c);
    printf("O valor de ASCII de %c é %d: \n", c, c);

}