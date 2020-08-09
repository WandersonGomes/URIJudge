//PROBLEM 1869
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1869
#include <stdio.h>

int main() {
	unsigned long long int numero = 0, resto = 0;
	char numero_convertido[64];
	int i = 0;
	char algarismos[32] = {
		'0','1','2','3','4','5','6','7','8','9',
		'A','B','C','D','E','F','G','H','I','J',
		'K','L','M','N','O','P','Q','R','S','T',
		'U','V'
	};
	
	while (1) {
		scanf("%llu", &numero);
		if (numero == 0) {
			printf("0\n");
			break;
		}

		i = 0;
		while (numero > 0) {
			resto = numero%32;
			numero = numero/32;
			numero_convertido[i] = algarismos[resto];
			i++;
		}

		while (--i > -1) {
			printf("%c", numero_convertido[i]);
		}
		printf("\n");
	}

	return 0;
}
