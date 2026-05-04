#include <stdio.h>

int main(){
    int matriz[3][3];
    int soma = 0;

    for(int l=0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            printf("\n[%i][%i]:",l,c);
            scanf("%i", &matriz[l][c]);
        }
    }
    
    for(int l=0; l < 3; l++){
        soma = 0;
        for(int c = 0; c < 3; c++){
            printf(" %i ", matriz[l][c]);
            soma = soma + matriz[l][c];
        }
        printf(": %i\n",soma);
    }
    
}