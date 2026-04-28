#include <stdio.h>

int main (){
    // int vetor[] = {7,1,2,4,9,5,6,8,10,3}; 
    int vetor[10];
    int temp=0;
    
    for(int i=0; i< 10; i++){
        printf("Digite valor de %i: ", i+1);
        scanf("%i", &vetor[i]);
    }
    
    
    for(int i =0; i< 9; i++){
        for(int j= i + 1; j < 10; j++){
            if(vetor[i] > vetor[j]){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    
    
    for(int i=0; i < 10; i++){
        printf(" %i", vetor[i]);
    }
}