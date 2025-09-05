#include <stdio.h>

void SOMA( int A, int B){
 printf("%d + %d = %d\n", A, B, A+B);
}

void DIVISAO(int A, int B){
 printf("%d / %d = %d\n", A, B, A / B);
}

void main(){
 printf("Bom dia SEXTOU!\n");

 int A = 0;
 int B = 0;
 
 printf("Digite o valor de A: ");
 scanf("%d", &A);
 
 printf("Digite o valor de B: ");
 scanf("%d", &B);
 
 SOMA(A, B);
 DIVISAO(A, B);
 
}