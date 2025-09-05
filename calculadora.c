#include <stdio.h>

int PERGUNTAR(char POS ){
 int VALOR = 0;
 printf("Digite o Valor de %c: ", POS);
 scanf("%d", &VALOR);
 
 return VALOR;
}

void SOMA(){
 int A, B;
 
 A = PERGUNTAR('A');
 B = PERGUNTAR('B');
 
 printf("%d + %d = %d ", A, B, A+B);
}

void SUBITRACAO(){
 int A, B;
 
 A = PERGUNTAR('A');
 B = PERGUNTAR('B');
 
 printf("%d - %d = %d ", A, B, A-B);
}

void DIVISAO(){
 int A, B;
 
 A = PERGUNTAR('A');
 B = PERGUNTAR('B');
 
 printf("%d / %d = %d ", A, B, A/B);
}

void MULTIPLICACAO(){
 int A, B;
 
 A = PERGUNTAR('A');
 B = PERGUNTAR('B');
 
 printf("%d * %d = %d ", A, B, A*B);
}

void main(){
 printf("SELECIONE UMA OPERAÇÃO MATEMATICA\n");
 printf("-------------------------\n");
 printf("-      CALCULADORA      -\n");
 printf("-------------------------\n");
 printf("- [ 1 ] SOMA            -\n");
 printf("- [ 2 ] SUBITRAÇÃO      -\n");
 printf("- [ 3 ] DIVISÃO         -\n");
 printf("- [ 4 ] MULTIPLICAÇÃO   -\n");
 printf("- [ 0 ] SAIR            -\n");
 printf("-------------------------\n");
 
 int opcao = 0;
 scanf("%d", &opcao);
 
 switch(opcao){
  case 1: 
   printf("SOMA\n");
   SOMA();
  break;
  
  case 2:
   printf("SUBITRAÇÃO");
   SUBITRACAO();
  break;
  
  case 3:
   printf("DIVISÃO");
   DIVISAO();
  case 4:
   printf("MULTIPLICAÇÃO");
   MULTIPLICACAO();
  break;
  
  default:
   printf("A OPERAÇÃO INVÁLIDA");
 }
 
}