#include <stdio.h>

int main(){
    int tab=0;
    
    printf("Digite o numero da tabuada: ");
    scanf("%i", &tab);
    
    for(int i=1; i <= 10; i++){
        printf("%i x %i = %i\n", tab, i, tab * i );    
    }
    
    
    
    
}