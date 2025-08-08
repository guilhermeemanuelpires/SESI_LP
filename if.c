#include <stdio.h>

void main(){
 float nota1 = 0;
 float nota2 = 0;
 float nota3 = 0;
 float media = 0;
 
 printf("Digite a primeira nota: ");
 scanf("%f", &nota1);
 
 printf("Digite a segunda nota: ");
 scanf("%f", &nota2);
 
 printf("Digite a terceira nota: ");
 scanf("%f", &nota3);
  
 media = (nota1 + nota2 + nota3) / 3;
 
 printf("Sua media é: %.1f \n", media);
 
 //Quando aluno atingir uma nota menor ou igual 5
 //Exiba a seguinte mensagem: "O Aluno está em reprovado!"
 
 //Quando aluno  atingir uma nota menor ou igual 6.9
 //Exiba a seguinte mensagem: "O Aluno está em recuperação!"
 
 //Quando o aluno atingir uma nota superior a 7
 //Exiba a seguinte mensagem: "O Aluno está aprovado!"
 
 // if(VERDADEIRO){
 //  EXECUTAR ESSE BLOCO DE CODIGO
 // }
 
 //  = COMPARA IGUALDE 
 // < MENOR
 // > MAIOR
 // <= MENOR OU IGUAL
 // >= MAIOR OU IGUAL
 // ! NEGAÇÃO
 
 if ( media <= 5 ){
  printf("O aluno esta REPROVADO!");
 }else if( media <= 7 ){
  printf("O aluno esta RECUPERAÇÃO!");
 }else{
  printf("O aluno esta APROVADO!");
 }
 
 
}