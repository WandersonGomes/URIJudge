//PROBLEM 1309
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1309
#include <stdio.h>

int main() {
	long long int dolares = 0;
	int centavos = 0, i = 0, j = 0;
	int resposta[15], tmp = 0;

	while (scanf("%lld", &dolares) != EOF) {
		scanf("%d", &centavos);
		
		j = 0; //vai tambem calcular o tamanho da resposta
		tmp = 0;

		//comeca pelos centavos
		for (i = 0; i < 2; i++) {
			resposta[j] = centavos%10;
			centavos = centavos/10;
			j++;
		}		
		//adiciona o ponto (ASCII) 46
		resposta[j] = 46;
		j++;

		//adiciona os algarismo dos dolares
		if (dolares == 0) {
			resposta[j] = 0;
			j++;
		} else {
			while (dolares != 0) {
				//adiciona a virgula (ACII) 44
				if (tmp == 3) {
					resposta[j] = 44;
					tmp = 0;
					j++;
				}

				resposta[j] = dolares%10;
				dolares = dolares/10;
				
				j++;
				tmp++;
			}
		}

		//apresenta o resultado
		printf("$");
		for (i = j - 1; i > -1; i--) {
			if (resposta[i] > 9) {
				printf("%c", resposta[i]);
			} else {
				printf("%d", resposta[i]);
			}
		}
		printf("\n");
	}

	return 0;
}