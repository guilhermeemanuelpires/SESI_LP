#include <stdio.h>

int main(){
    float peso, altura, imc;
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    imc = peso / ( altura * altura);
    
    printf("IMC: %.2f\n", imc);
    
    if(imc < 18.5)
        printf("Abaixo do peso");
    else if(imc < 24.9)
        printf("Normal");
    else if (imc < 29.9)
        printf("Sobrepeso");
    else
        printf("Obesidade");

    
}