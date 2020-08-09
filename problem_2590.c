//PROBLEM 2590
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2590
#include <stdio.h>

int main() {
	long long int numero_instancias = 0, numero = 0, i = 0, resto = 0;

	scanf("%lld", &numero_instancias);	

	for (i = 0; i < numero_instancias; i++) {
		scanf("%lld", &numero);
		resto = numero%4;

		switch(resto) {
			case 0: printf("1\n"); break;
			case 1: printf("7\n"); break;
			case 2: printf("9\n"); break;
			case 3: printf("3\n"); break;
		}
	}

	return 0;
}