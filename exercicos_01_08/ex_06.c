#include <stdio.h>

void main(){
 char nome[100] = "";
 float salario = 0;
 int meses = 0;
 float total = 0;
  
 printf("Digite seu nome: ");
 scanf("%s", nome);
 printf("Digite seu salario: ");
 scanf("%f", &salario);
 printf("Digite o meses trabalhado: ");
 scanf("%d", &meses);
 
 total = meses * salario;
 printf("Funcionário %s ganhou R$%.2f em %d meses.'", nome, total, meses);
}