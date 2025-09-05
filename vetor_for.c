#include<stdio.h>

void main(){
 
 printf("VETORES\n");
 
 int numeros[5];
 int soma = 0;
 
 for(int i=0; i < 5; i++){
  printf("Digite o valor de %d: \n",i);
  scanf("%d", &numeros[i]);
 }
 
 for(int i=0; i < 5; i++){
  soma = soma + numeros[i];
 }
 
 printf("A soma de todas as posição é %d", soma );
 
}