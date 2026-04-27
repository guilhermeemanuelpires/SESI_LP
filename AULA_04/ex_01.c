#include <stdio.h>

int main(){
    float notas[10];
    float soma =0;
    int total_acima_media =0;

    for(int i=0; i < 10; i++){
        printf("Digite a nota %i: ", i+1);
        scanf("%f", &notas[i]);    
        soma = soma + notas[i]; 
        
        if(notas[i] >= 7){
            total_acima_media++;
        }
    }
    
    printf("A media da turma he: %.2f", soma/10);
    printf("\nTotal de notas acima da media: %i", total_acima_media);
    
    for(int i=0; i< 10; i++){
        if(notas[i] >= 7){
            printf("\n%i - NOTA: %.2f ", i+1, notas[i]);    
        }
    }

}