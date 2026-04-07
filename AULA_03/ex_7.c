#include <stdio.h>

int main(){
    int cont=0;
    for(int i=1; i <= 10; i++){
        printf(" %i + %i = %i\n", cont, i, cont + i);
        
        cont = cont + i;
    }
    
    printf("A soma de todos os numeros até 10 he: %i", cont);
    
}