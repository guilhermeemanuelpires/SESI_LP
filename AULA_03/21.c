#include <stdio.h>

int main() {
	int op=0;

	while(op != 3) {
		printf("1: Dizer Ola!\n");
		printf("2: Dizer Tudo bem?\n");
		printf("3: Sair\n");
		scanf("%i", &op);

		switch(op) {
		case 1:
			printf("Ola!\n");
		case 2:
			printf("Tudo bem?\n");
		case 3:
			printf("Tchau!\n");
		default:
			printf("Opcao invalida!");
			break;
		}


	}



}