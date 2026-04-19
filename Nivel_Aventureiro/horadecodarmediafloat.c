#include <stdio.h>

    int main() {
        float nota1, nota2, nota3;
        float media1;
        float media2;
        char aluno1 [20];
        char aluno2 [20];        
        
        printf("*** Programa de Cálculo de Média ***\n\n");
        
        printf("Digite o nome do primeiro aluno: \n\n");
        scanf("%s", &aluno1);
        
        printf("Digite a sua primeira nota:  \n");
        scanf("%f", &nota1);    

        printf("Digite a sua segunda nota: \n");
        scanf("%f", &nota2);

        printf("Digite a sua terceira nota: \n");
        scanf("%f", &nota3);

        media1 = (nota1 + nota2 + nota3) / 3;
        
        printf("A média é: %.1f\n\n", media1);
        

        printf("Digite o nome do segundo aluno: \n\n");
        scanf("%s", &aluno2);

        printf("Digite a primeira nota: \n");
        scanf("%f", &nota1);
        
        printf("Digite a segunda nota: \n");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: \n");
        scanf("%f", &nota3);

        media2 = (nota1 + nota2 + nota3) / 3;
        printf("A média é: %.1f\n\n", media2);
       }