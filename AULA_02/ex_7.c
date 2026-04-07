#include <stdio.h>

int main (){
    int l1 ,l2 ,l3;
    
    printf("Digite o lado 1: ");
    scanf("%i", &l1);
    
    printf("Digite o lado 2: ");
    scanf("%i", &l2);
    
    printf("Digite o lado 3: ");
    scanf("%i", &l3);
    
    if (l1 == l2 && l1 ==l3 && l2 ==l3) 
        printf("Equilátero");
    else if (l1 == l2 || l1 ==l3 || l2 == l3 )
        printf("Isósceles");
    else 
        printf("Escaleno");
    

}