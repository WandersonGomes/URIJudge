//PROBLEM 3059
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3059
#include <stdio.h>
#include <stdlib.h>

int main() {
	int qtd_numeros = 0, inferior = 0, superior = 0;
	int* numeros = NULL;
	int i = 0, j = 0, resultado = 0, soma = 0;

	scanf("%d %d %d", &qtd_numeros, &inferior, &superior);

	numeros = (int*) malloc(sizeof(int) * qtd_numeros);
	for (; i < qtd_numeros; i++)
		scanf("%d", &numeros[i]);
	

	for (i = 0; i < (qtd_numeros-1); i++) {
		for (j = i + 1; j < qtd_numeros; j++) {
			soma = numeros[i] + numeros[j];
			if ((soma >= inferior) && (soma <= superior))
				resultado += 1;
		}
	}

	printf("%d\n", resultado);
	return 0;
}