#include <stdio.h>

int main(){
    int matriz[3][3];

    for(int l=0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            printf("\n[%i][%i]:",l,c);
            scanf("%i", &matriz[l][c]);
        }
    }
    printf("\nLista matriz:\n");
    for(int l=0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            printf("%i ",matriz[l][c]);
        }
        printf("\n");
    }
    
    printf("\nLista matriz na diagonal:\n");
    
    for(int l=0; l<3; l++){
        for(int c=0; c<3; c++){
            
            // if(l == 0 && c < 1){
            //     printf("%i ",matriz[l][c]);
            // }else if (l == 1 && c > 0 && c < 2){
            //     printf("%i ",matriz[l][c]);
            // }else if(l == 2 && c > 1){
            //     printf("%i ",matriz[l][c]);
            // }else{
            //     printf(" ");    
            // }
            
            if (l==c){
                printf("%i ",matriz[l][c]);
            }else{
                printf(" "); 
            }
            
        }
        printf("\n");
    }
    
    
}