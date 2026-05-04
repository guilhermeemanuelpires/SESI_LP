#include <stdio.h>

int main(){
    int matriz[2][2];
    int l=0;
    int c=0;
    int soma=0;
    
    while(l<2){
        c=0;
        while(c < 2){
            printf("Digite o valor [%i][%i]: ",l,c);
            scanf("%i", &matriz[l][c]);
            
            soma += matriz[l][c];
            
            c++;
        }
        l++;
    }
    
    printf("\nA soma de todos valor: %i", soma);
}