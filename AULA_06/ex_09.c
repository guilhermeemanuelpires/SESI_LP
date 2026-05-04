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
    
    
    printf("\nLista matriz substituindo valores negativos por 0: \n");
    for(int l=0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            if(matriz[l][c] < 0 ){
                printf("%i ",0);    
            }else{
                printf("%i ",matriz[l][c]);    
            }
        }
        printf("\n");
    }
    
    
    
    
}