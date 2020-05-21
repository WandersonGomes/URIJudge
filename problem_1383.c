//PROBLEM 1383
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1383
#include <stdio.h>
#include <string.h>

int main() {
	int matriz[9][9], digitos[10];
	int i = 0, linha = 0, coluna = 0;
	int quantidade_instancia = 0;
	int flag = 0, aux_linha = 0, aux_coluna = 0;

	scanf("%d", &quantidade_instancia);
	for (i = 0; i < quantidade_instancia; i++) {
		flag = 0;

		//preenche a matriz
		for (linha = 0; linha < 9; linha++) {
			for (coluna = 0; coluna < 9; coluna++) {
				scanf("%d", &matriz[linha][coluna]);
			}
		}

		//testa as linhas
		for (linha = 0; linha < 9; linha++) {
			memset(digitos, 0, sizeof(digitos));
			for (coluna = 0; coluna < 9; coluna++) {
				if (digitos[matriz[linha][coluna]] == 0) {
					digitos[matriz[linha][coluna]] = 1;
				} else {
					flag = 1;
					break;
				}
			}
			if (flag) {
				break;
			}
		}

		//testa as colunas
		if (!flag) {
			for (coluna = 0; coluna < 9; coluna++) {
				memset(digitos, 0, sizeof(digitos));
				for (linha = 0; linha < 9; linha++) {
					if (digitos[matriz[linha][coluna]] == 0) {
						digitos[matriz[linha][coluna]] = 1;
					} else {
						flag = 1;
						break;
					}
				}
				if (flag) {
					break;
				}
			}	
		}

		//testa os quadrados
		if (!flag) {
			aux_linha = 0;
			aux_coluna = 0;
			
			while (1) {
				memset(digitos, 0, sizeof(digitos));
				
				for (linha = aux_linha; linha < aux_linha + 3; linha++) {
					for (coluna = aux_coluna; coluna < aux_coluna + 3; coluna++) {
						if (digitos[matriz[linha][coluna]] == 0) {
							digitos[matriz[linha][coluna]] = 1;
						} else {
							flag = 1;
							break;	
						}
					}
					if (flag) {
						break;
					}
				}

				if (flag) {
					break;
				}

				aux_coluna += 3;
				if (aux_coluna > 6) {
					aux_linha += 3;
					aux_coluna = 0;
				}

				if (aux_linha > 6) {
					break;
				}
			}
		}

		printf("Instancia %d\n", i+1);
		if (!flag) {
			printf("SIM\n\n");
		} else {
			printf("NAO\n\n");
		}
	}

	return 0;
}