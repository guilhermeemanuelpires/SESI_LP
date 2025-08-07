#include <stdio.h>

void main(){
 //Peça ao usuário o seu ano de nascimento e o ano atual. Calcule e exiba a idade.
 
 int ano_nascimento = 0;
 int ano_atual = 0;
 int idade = 0;
 
 printf("Digite o seu ano de nascimento:");
 scanf("%d", &ano_nascimento);

 printf("Digite o ano atual:");
 scanf("%d", &ano_atual);
 
 idade = ano_atual - ano_nascimento;
 
 printf("A sua idade é : %d", idade);
 
}