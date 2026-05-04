#include <stdio.h>

int main(){
    int matriz[5][5];
    int soma = 0;

    for(int l=0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            printf("\n[%i][%i]: ",l,c);
            scanf("%i", &matriz[l][c]);
        }
    }
    
    printf("\nLista matriz:\n");
    for(int l=0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            printf("%i ",matriz[l][c]);
        }
        printf("\n");
    }
    
    printf("\nLista matriz na diagonal:\n");
    for(int l=0; l<5; l++){
        for(int c=0; c < 5; c++){
            if( l + c == 4){
                printf("%i ",matriz[l][c]);    
                soma = soma + matriz[l][c];
            }else{
                printf(" ");    
            }
            
        }
        printf("\n");
    }
    
    printf("\nA soma da diagonal secundaria he: %i", soma);
    
    
}