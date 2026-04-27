#include <stdio.h>

int main(){
    float saques[3];
    float total_sque=0;
    float maior_saque=0;
    int total_acima_de_500=0;
    
    for(int i = 0; i < 3;i++ ){
        printf("Digite o valor do saque %i: ", i+1);
        scanf("%f", &saques[i]);
        total_sque = total_sque + saques[i];
        
        if (saques[i] > maior_saque){
            maior_saque = saques[i];
        }
        
        if(saques[i] > 500){
            total_acima_de_500++;
        }
        
    }
    
    printf("O total sacado foi R$%.2f", total_sque);
    printf("\nO maior saque foi de R$%.2f", maior_saque);
    printf("\nQuantidade de saques acima de R$500,00: %i ", total_acima_de_500);
    
}