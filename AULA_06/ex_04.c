#include <stdio.h>

int main(){
    int matriz[4][4];
    int qtd=0;

    for(int l=0; l < 4; l++){
        for(int c = 0; c < 4; c++){
            printf("\n[%i][%i]:",l,c);
            scanf("%i", &matriz[l][c]);
            if (matriz[l][c] > 10){
                qtd ++;
            }
        }
    }
    
    printf("\nTotal de valores maior que 10: %i", qtd);
    
}