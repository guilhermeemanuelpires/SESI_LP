#include <stdio.h>

int main(){
    int matriz[4][4];
    int maior=0;
    int menor=0;

    for(int l=0; l < 4; l++){
        for(int c = 0; c < 4; c++){
            printf("\n[%i][%i]: ",l,c);
            scanf("%i", &matriz[l][c]);
            
            if (l == 0 && c == 0 ){
                maior = matriz[l][c];
                menor = matriz[l][c];
            }
            
            if (matriz[l][c] > maior){
                maior= matriz[l][c];
            }
            
            
            if(matriz[l][c] < menor ){
                menor = matriz[l][c];
            }
        }
    }
    
    printf("\nO maior valor %i: ", maior);
    printf("\nO menor valor %i: ", menor);
    
    
}