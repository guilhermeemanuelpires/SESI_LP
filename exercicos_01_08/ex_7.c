#include <stdio.h>

void main(){
 char nome[30];
 float preco = 0;
 int quantia = 0;
 
 printf("Digite o nome do produto: ");
 scanf("%s", nome);
 
 printf("Digite o preço do produto: ");
 scanf("%f", &preco);
 
 printf("Digite a quantia de produto: ");
 scanf("%d", &quantia);
 
 printf("Os produtos %s custara R$%.2f", nome, preco*quantia);
}