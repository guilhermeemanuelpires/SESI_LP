#include <stdio.h>

void main(){
 int i = 0;
 printf("\nIncrementa de 0 a 10");
 do{
  printf("%d\n", i);
  i++;
 }while(i <=10);
 
 printf("\nDecrementa de 11 a 0");
 do{
  printf("%d\n",i);
  i--;
 }while(i>=0);
 
 printf("Qual é o valor de i ? : %d", i);
}