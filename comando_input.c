#include <stdio.h>

void main(){
  
  int a;
  int b;
  
  printf("Digite o valor de A:");
  scanf("%d", &a);
  
  printf("Digite o valor de B:");
  scanf("%d", &b);
  
  int soma =  a + b;
  
  printf("\n");
  
  printf("%d + %d = %d", a, b, soma);
}