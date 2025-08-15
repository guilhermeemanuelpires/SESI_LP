#include <stdio.h>
int main()
{
    int taboada = 0;
    
    printf("Digite o número da taboada: ");
    scanf("%d", &taboada);
    
    for(int i = 1; i <= 10; i++){
      printf("\n%d x %d = %d", i, taboada, i * taboada) ;
    }
    
}