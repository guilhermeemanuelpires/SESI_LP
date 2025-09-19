#include <stdio.h>

void main() {
	int vetor[3];

	for(int i=0; i < 3; i++) {
		printf("Digite o valor de %d\n", i+1);
		scanf("%d", &vetor[i]);
	}

    // 	printf("Digite o valor de 1\n");
    // 	scanf("%d", &vetor[0]);

    // 	printf("Digite o valor de 2\n");
    // 	scanf("%d", &vetor[1]);

    // 	printf("Digite o valor de 3\n");
    // 	scanf("%d", &vetor[2]);

	// vetor[0] = 1;
	// vetor[1] = 2;
	// vetor[2] = 3;

	// printf("%d\n", vetor[0]);
	// printf("%d\n", vetor[1]);
	// printf("%d\n", vetor[2]);

	// IGUAL =
	// MENOR <
	// MAIO >
	// MENOR IGUAL <=
	// MAIOR IGUAL >=
	// NEGAÇÃO !=
    
    printf("Exibe Valores:\n");
    
	for(int i=0; i <= 2; i++) {
		printf("O valor de %d: %d\n",i+1, vetor[i]);
	}

}