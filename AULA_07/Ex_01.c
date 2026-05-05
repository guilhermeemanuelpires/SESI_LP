#include <stdio.h>

float v1, v2;
float resultado=0;
int opcao;

float adicao(float a, float b) {
	return a + b;
}

float subtracao(float a, float b) {
	return a - b;
}

float multiplicacao(float a, float b) {
	return a * b;
}

float divisao(float a, float b) {
	return a / b;
}

void prencherDados(){
    printf("\n* * * * * * * * * * * * * *\n");
    printf("* Digite primeiro valor\n");
    printf("* -> ");
    scanf("%f", &v1);
    printf("\n* * * * * * * * * * * * * *\n");
    printf("* Digite segundo valor\n");
    printf("* -> ");
    scanf("%f", &v2);
}

void imprimirResultado(char *operacao, float valor) {
    printf("* * * * * * * * * * * * * * * * \n");
	printf("A %s dos dois valores: %.2f *\n", operacao, valor);
	printf("* * * * * * * * * * * * * * * * \n");
	printf("\n");
}

int main() {

	do {
	
		printf("* * * * * * * * * * * * * *\n");
		printf("*  1 SOMA                 *\n");
		printf("*  2 DIVISÃO              *\n");
		printf("*  3 SUBTRAÇÃO            *\n");
		printf("*  4 MULTIPLICAÇÃO        *\n");
		printf("*  0 SAIR                 *\n");
		printf("* * * * * * * * * * * * * *\n");
		printf("* SELECIONE UMA OPÇÃO     *\n");
		printf("* * * * * * * * * * * * * *\n");
		printf("* -> ");
		scanf("%i", &opcao);
		printf("* * * * * * * * * * * * * *\n");
		printf("* Opção selecionada: %i    *\n", opcao);
		printf("* * * * * * * * * * * * * *\n");
		
		switch(opcao) {
		case 0:{
		    printf("Obrigado pela preferncia, até mais!");
		    break;
		}
		case 1: {
		    prencherDados();
			resultado = adicao( v1, v2);
			imprimirResultado("soma", resultado);
			break;
		}
		case 2 : {
		    prencherDados();
			resultado = divisao( v1, v2);
			imprimirResultado("divisão", resultado);
			break;
		}
		case 3: {
		    prencherDados();
			resultado = subtracao(v1, v2);
			imprimirResultado("subtração", resultado);
			break;
		}
		case 4 : {
		    prencherDados();
			resultado = multiplicacao(v1, v2);
			imprimirResultado("multiplicação", resultado);
			break;
		}
		default: {
			printf("Opção invalida!\n");
		}
		}
	} while(opcao);
}