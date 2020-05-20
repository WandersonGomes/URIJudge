//PROBLEM 2399
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2399
#include <stdio.h>
#include <string.h>

#define MAX 52

int main() {
	int campo[MAX], resposta[MAX];
	int quantidade_casas = 0, i = 0;

	memset(campo, 0, sizeof(campo));
	memset(resposta, 0, sizeof(resposta));

	scanf("%d", &quantidade_casas);

	for (i = 0; i < quantidade_casas; i++) {
		scanf("%d", &campo[i+1]);
	}

	for (i = 0; i <= quantidade_casas; i++) {
		if (campo[i] == 1) {
			resposta[i-1]++;
			resposta[i]++;
			resposta[i+1]++;
		}
	}

	for (i = 1; i <= quantidade_casas; i++) {
		printf("%d\n", resposta[i]);
	}

	return 0;
}