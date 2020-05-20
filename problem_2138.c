//PROBLEM 2138
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2138
#include <stdio.h>
#include <string.h>

#define MAX 1001

//FUNCAO QUE RETONA O VALOR DO ALGARISMO EM INTEIROS
int letraParaNumero(char algarismo) {
	switch (algarismo)
	{
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
	}
}

//PROGRAMA PRINCIPAL
int main() {
	char numero[MAX];
	int digitos[11];
	int tamanho_numero = 0, i = 0;

	int maior = 0, maior_quantidade = 0;

	while (scanf("%s", numero) != EOF) {
		memset(digitos, 0, sizeof(digitos));
		tamanho_numero = strlen(numero);
		for (i = 0; i < tamanho_numero; i++) {
			digitos[letraParaNumero(numero[i])]++;
		}

		maior = 0;
		maior_quantidade = 0;
		if (tamanho_numero > 1) {
			for (i = 0; i < 11; i++) {
				if (digitos[i] > maior_quantidade) {
					maior_quantidade = digitos[i];
					maior = i;
				} else if (digitos[i] == maior_quantidade) {
					if (i > maior) {
						maior = i;
					}
				}
			}
		} else {
			maior = letraParaNumero(numero[0]);
		}

		printf("%d\n", maior);
	}
}