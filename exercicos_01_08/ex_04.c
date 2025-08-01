#include <stdio.h>

void main(){
 float cm = 0;
 float m = 0; 
 
 printf("Digite um valor em CM: ");
 scanf("%f", &cm);
 
 m = cm / 100;
 printf("CM: %.3f -> M: %.3f", cm, m);
}