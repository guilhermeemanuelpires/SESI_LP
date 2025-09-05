#include<stdio.h>

void main(){
 int contador = 0;

 printf("Digite o numero: ");
 scanf("%d", &contador);
 
 for(int i =1; i <= contador; i++){
  printf("%d\n", i);
 }
 
}