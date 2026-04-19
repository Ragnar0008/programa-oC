#include <stdio.h>

int main() {
float bimestre_1, bimestre_2, bimestre_3, bimestre_4;
float media1, media2;
char aluno[10];

printf("*** Média dos Alunos\n\n ***");

printf("Digite o nome do(a) primeiro aluno(a): \n");
scanf("%s", aluno);

printf("Digite a nota do 1º Bimestre: \n");
scanf("%f", &bimestre_1);

printf("Digite a nota do 2º Bimestre: \n");
scanf("%f", &bimestre_2);

printf("Digite a not do 3º Bimestre: \n");
scanf("%f", &bimestre_3);

printf("Digite a nota do 4º Bimestre: \n");
scanf("%f", &bimestre_4);

media1 = (float) (bimestre_1 + bimestre_2 + bimestre_3 + bimestre_4) / 4;
printf("A média é: %.2f\n", media1);



printf("Digite o nome do segundo(a) aluno(a): \n");
scanf("%s", aluno);

printf("Digite a nota do 1º Bimestre: \n");
scanf("%f", &bimestre_1);

printf("Digite a nota do 2º Bimestre: \n");
scanf("%f", &bimestre_2);

printf("Digite a nota do 3º Bimestre: \n");
scanf("%f", &bimestre_3);

printf("Digite a nota do 4º Bimestre: \n");
scanf("%f", &bimestre_4);

media2 = (float) (bimestre_1 + bimestre_2 + bimestre_3 + bimestre_4) / 4;
printf("A média2 do segundo aluno é: %.2f", media2);


return 0;

}