#include <stdio.h>

int main() {
	int ano;
	int res_bi, res_cen;

	printf("Digite uma ano:");
	scanf("%i", &ano);

	res_bi = ano % 4;
	res_cen = ano % 400;
	
	if (res_bi == 0 || res_cen == 0) {
		printf("o ano %i he bissexto!", ano);
	} else {
		printf("o ano %i nao he bissexto!", ano);
	}
	
	
	
	

}