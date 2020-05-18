//PROBLEM 1168
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1168
#include <stdio.h>

//FUNCAO QUE RETORNA A QUANTIDADE DE LEDS PARA FORMAR O ALGARISMO NUMERICO
int numeroLeds(char algarismo) {
	switch (algarismo)
	{
		case '0': return 6;
		case '1': return 2;
		case '2': return 5;
		case '3': return 5;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 3;
		case '8': return 7;
		case '9': return 6;
	}
}

//PROGRAMA PRINCIPAL
int main() {
	char c;
	int i = 0, quantidade_numeros = 0;
	long long int resultado = 0;
	scanf("%d%*c", &quantidade_numeros);

	for (i = 0; i < quantidade_numeros; i++) {
		resultado = 0;
        //ler todos os algarismos ate encontrar uma quebra de linha
		while (1) {
			c = getchar();
			if (c == '\n') {
				break;
			}
			resultado += numeroLeds(c);
		}
		printf("%lld leds\n", resultado);
	}

	return 0;
}