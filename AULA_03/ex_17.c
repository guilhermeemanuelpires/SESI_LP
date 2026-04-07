#include <stdio.h>

int main(){
    int valor=0;
    int count=0;
    while( valor >= 0){
        printf("Digite um valor: ");
        scanf("%i", &valor);
        if (valor >=0)
            count++;
    }
    
    printf("Totol de numeros digitados: %i", count );
    
}