//PROBLEM 2407
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2407
/*
Para saber mais sobre o assunto:
https://pt.wikihow.com/Resolver-um-Quadrado-M%C3%A1gico
*/
#include <stdio.h>

#define MAX 1000

int main() {
	int ordem = 0, i = 0, j = 0;
	long long int soma_magica = 0, soma_corrente = 0;
	long long int quadrado[MAX][MAX] = {0};
	int resultado = 1;

	scanf("%d", &ordem);

	//calcula a soma magica do quadrado
	soma_magica = (ordem * ((ordem * ordem) + 1))/2;

	//leitura
	for (i = 0; i < ordem; i++)
		for (j = 0; j < ordem; j++)
			scanf("%lld", &quadrado[i][j]);
		
	//compara as linhas
	for (i = 1; i < ordem; i++) {
		soma_corrente = 0;
		for (j = 0; j < ordem; j++)
			soma_corrente += quadrado[i][j];
		if (soma_corrente != soma_magica) {
			resultado = 0;
			break;
		}
	}

	//compara as colunas
	if (resultado) {
		for (i = 0; i < ordem; i++) {
			soma_corrente = 0;
			for (j = 0; j < ordem; j++) 
				soma_corrente += quadrado[j][i];
			if (soma_corrente != soma_magica) {
				resultado = 0;
				break;
			}
		}
	}

	//compara a diagonal principal
	if (resultado) {
		soma_corrente = 0;
		for (i = 0; i < ordem; i++)
			soma_corrente += quadrado[i][i];
		if (soma_corrente != soma_magica)
			resultado = 0;
	}

	//compara a diagonal secundaria
	if (resultado) {
		soma_corrente = 0;
		for (i = 0; i < ordem; i++)
			soma_corrente += quadrado[i][ordem-i-1];
		if (soma_corrente != soma_magica)
			resultado = 0;
	}

	//apresenta a resposta
	if (resultado)
		printf("%lld\n", soma_magica);
	else 
		printf("0\n");

	return 0;
}