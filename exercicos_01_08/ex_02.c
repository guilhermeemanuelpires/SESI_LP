#include <stdio.h>

void main(){
 int a = 0;
 int b = 0;
 int res = 0; 

 printf("Digite valor de a: ");
 scanf("%d,", &a);
 
 printf("Diginte valor de b: ");
 scanf("%d", &b);
 
 res = a + b;
 printf("%d + %d = %d", a, b, res);
  
}