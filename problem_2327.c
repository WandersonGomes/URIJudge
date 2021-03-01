//PROBLEM 2327
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2327
#include <stdio.h>

#define MAX 10

int main() {
	int ordem = 0, i = 0, j = 0;
	int matriz[MAX][MAX] = {0};
	int resultado = 1;
	int soma = 0, soma_corrente = 0;

	scanf("%d", &ordem);

	//leitura
	for (i = 0; i < ordem; i++)
		for (j = 0; j < ordem; j++)
			scanf("%d", &matriz[i][j]);
		
	//calcula a soma
	for (i = 0; i < ordem; i++)
		soma += matriz[0][i];

	//compara as linhas
	for (i = 1; i < ordem; i++) {
		soma_corrente = 0;
		for (j = 0; j < ordem; j++)
			soma_corrente += matriz[i][j];
		if (soma_corrente != soma) {
			resultado = 0;
			break;
		}
	}

	//compara as colunas
	if (resultado) {
		for (i = 0; i < ordem; i++) {
			soma_corrente = 0;
			for (j = 0; j < ordem; j++) 
				soma_corrente += matriz[j][i];
			if (soma_corrente != soma) {
				resultado = 0;
				break;
			}
		}
	}

	//compara a diagonal principal
	if (resultado) {
		soma_corrente = 0;
		for (i = 0; i < ordem; i++)
			soma_corrente += matriz[i][i];
		if (soma_corrente != soma)
			resultado = 0;
	}

	//compara a diagonal secundaria
	if (resultado) {
		soma_corrente = 0;
		for (i = 0; i < ordem; i++)
			soma_corrente += matriz[i][ordem-i-1];
		if (soma_corrente != soma)
			resultado = 0;
	}

	//apresenta a resposta
	if (resultado)
		printf("%d\n", soma);
	else 
		printf("-1\n");

	return 0;
}