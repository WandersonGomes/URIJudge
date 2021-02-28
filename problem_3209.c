//PROBLEM 3209
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3209
#include <stdio.h>

int main() {
	int qtd_testes = 0, i = 0, j = 0;
	int qtd_filtros = 0;
	int qtd_tomadas = 0, resultado = 0;

	scanf("%d", &qtd_testes);

	for (; i < qtd_testes; i++) {
		resultado = 1;
		scanf("%d", &qtd_filtros);
		
		for (j = 0; j < qtd_filtros; j++) {
			scanf("%d", &qtd_tomadas);
			resultado += (qtd_tomadas - 1);
		}

		printf("%d\n", resultado);
	}

	return 0;
}