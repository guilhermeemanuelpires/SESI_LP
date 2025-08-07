#include <stdio.h>

void main(){
 char NOME[255] = ""; 
 printf("Digite seu nome: ");
 scanf("%s", NOME);
 printf("Olá, %s! Seja bem-vindo ao mundo da programação em C!",NOME);
}