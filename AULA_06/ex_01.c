#include <stdio.h>

//       C0 C1  C2 
//  l0   1   2   3
//  l1   1   2   3
//  l2   1   2   3

int main(){
    int matriz[3][3];

    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            printf("Digite valor de [%i][%i]:", l, c);
            scanf("%i", &matriz[l][c]);
        }
    }
    
    printf("\nListando todos os valores: \n");
    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            printf("%i ", matriz[l][c]);
        }
        printf("\n");
    }
    
    
    
}