//PROBLEM 1542
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1542
#include <stdio.h>

int main() {
	int q = 0, d = 0, p = 0;
	int resultado = 0;

	while (1) {
		scanf("%d",&q);
		if (q == 0) {
			break;
		}

		scanf("%d", &d);
		scanf("%d", &p);

		resultado = (q * d * p)/(p - q);

		if (resultado == 1) {
			printf("%d pagina\n", resultado);
		} else {
			printf("%d paginas\n", resultado);
		}		
	}

	return 0;
}