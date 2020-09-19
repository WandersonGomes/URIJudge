//PROBLEM 2925
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2925
#include <stdio.h>

//numeros da sequencia
unsigned long long int iccanobif[61] = {0, 1, 2, 3, 5, 8, 13, 39};

//FUNCAO QUE ESCREVE O INVERSO DE UM NUMERO
unsigned long long int inverso(unsigned long long int numero) {
	unsigned long long int multiplicador = 10, resultado = 0, resto = 0;
	if (numero < 13) {
		return numero;
	}
	//encontra o divisor
	while (numero > (multiplicador * 10)) {
		multiplicador = multiplicador * 10;
	}

	//calcula o resultado
	while (numero != 0) {
		resto = numero%10;
		numero = numero/10;
		resultado += (resto * multiplicador);
		multiplicador = multiplicador/10;
	}
	resultado += numero;

	return resultado;
}

//FUNCAO QUE PREENCHE A SEQUENCIA "ICCANOBIF" DO PROBLEMA
void preencheIccanobif() {
	int i = 0;
	for (i = 8; i < 61; i++) {
		iccanobif[i] = inverso(iccanobif[i-1]) + inverso(iccanobif[i-2]);
	}
}

//PROGRAMA PRINCIPAL
int main() {
	int numero = 0, i = 0;

	preencheIccanobif();

	while (scanf("%d", &numero) != EOF) {
		printf("%llu\n", iccanobif[numero]);
	}

	return 0;
}