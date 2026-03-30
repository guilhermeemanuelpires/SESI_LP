#include <stdio.h>

int main(){
    float n1, n2, n3, media;
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    
    media = (n1 + n2 + n3) / 3;
    
    printf("Sua média é: %.2f \n", media);
    
    if(media >= 7.0){
        printf("APROVADO");
    }else if (media <= 2.9){
        printf("REPROVADO");
    }else{
        printf("RECUPERAÇÃO");
    }
    
}