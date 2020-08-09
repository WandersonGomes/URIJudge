//PROBLEM 2922
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2922
#include <stdio.h>

//FUNCAO QUE RETORNA O VALOR ABSOLUTO DE UM NUMERO INTEIRO
int abs(int a) {
	if (a < 0) {
		return -a;
	}
	return a;
}

//PROGRAMA PRINCIPAL
int main() {
	int sala_barroquinha = 0, sala_umbujahyba = 0, resultado = 0;

	while (scanf("%d %d", &sala_barroquinha, &sala_umbujahyba) != EOF) {		
		if (sala_umbujahyba == sala_barroquinha) {
			printf("0\n");
		} else {
			resultado = abs(sala_umbujahyba - sala_barroquinha) - 1;
			printf("%d\n", resultado);
		}
	}

	return 0;
}