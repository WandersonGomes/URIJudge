//PROBLEM 1225
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1225
#include <stdio.h>

#define MAX 10000

//FUNCAO QUE RETORNA O VALOR ABSOLUTO DE UM NUMERO
long int abs(long int a) {
	if (a < 0) {
		return -a;
	}
	return a;
}

//PROGRAMA PRINCIPAL
int main() {
	int numero_integrantes = 0, i = 0;
	long int notas[MAX];	
	long int soma = 0, quociente = 0, resultado = 0;

	while (scanf("%d", &numero_integrantes) != EOF) {
		
		soma = 0;
		for (i = 0; i < numero_integrantes; i++) {
			scanf("%ld", &notas[i]);
			soma += notas[i];
		}
		
		if (soma%numero_integrantes == 0) {
			quociente = soma/numero_integrantes;
			resultado = 0;
			for (i = 0; i < numero_integrantes; i++) {
				resultado += abs(notas[i] - quociente);			
			}
			printf("%ld\n", (resultado/2) + 1);
		} else {
			printf("-1\n");
		}
	}

	return 0;
}