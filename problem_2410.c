//PROBLEM 2410
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2410
//Obs.:
/*
A utilizacao de uma quantidade grande memoria eh para poder solucionar o
problema em um tempo habil. Eh aquele negocio +memoria -tempo.
*/

#include <stdio.h>
#include <string.h>

#define MAX 1000001

int main() {
	int alunos[MAX];
	long long int quantidade_chamada = 0, valor = 0, i = 0;
	long long int resultado = 0;
	memset(alunos, 0, sizeof(alunos));

	scanf("%lld", &quantidade_chamada);
	for (i = 0; i < quantidade_chamada; i++) {
		scanf("%lld", &valor);
		if (alunos[valor] != 1) {
			alunos[valor] = 1;
			resultado++;
		}
	}
	printf("%lld\n", resultado);

	return 0;
}