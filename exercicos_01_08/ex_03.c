#include <stdio.h>

int main(){
 float nota1 = 0;
 float nota2 = 0;
 float nota3 = 0;
 float media = 0;
   
 printf("Digite a nota 1 : ");
 scanf("%f", &nota1);
 
 printf("Digite a nota 2: ");
 scanf("%f", &nota2);
 
 printf("Digite a nota 3: ");
 scanf("%f", &nota3);

 media = (nota1 + nota2 + nota3) / 3;
 
 printf("Nota 1: %.2f \n", nota1);
 printf("Nota 2: %.2f \n", nota2);
 printf("Nota 3: %.2f \n", nota3);
 printf("Sua média é: %.2f", media);
 
}