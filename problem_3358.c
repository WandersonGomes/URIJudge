//PROBLEM 3301
//link = https://www.beecrowd.com.br/judge/pt/problems/view/3358
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ehVogal(char letra) {
	switch(letra) {
		case 'a': return 1;
		case 'e': return 1;
		case 'i': return 1;
		case 'o': return 1;
		case 'u': return 1;
	}

	return 0;
}

int ehFacil(char* sobrenome, int tamanho) {
	int i = 0;

	sobrenome[tamanho - 1] = '\0';
	sobrenome[0] = tolower(sobrenome[0]);

	for (; i < tamanho - 3; i++) {
		if (!ehVogal(sobrenome[i]) && !ehVogal(sobrenome[i+1]) && !ehVogal(sobrenome[i+2]))
			return 0;
	}

	return 1;
}

int main() {
	int qtd_sobrenomes = 0;
	int i = 0;
	char sobrenome[43];

	scanf("%d", &qtd_sobrenomes);
	getchar();

	for(; i < qtd_sobrenomes; i++) {
		fgets(sobrenome, 42, stdin);
		sobrenome[strlen(sobrenome)] = '\0';		

		if (ehFacil(sobrenome, strlen(sobrenome))) {
			sobrenome[0] = toupper(sobrenome[0]);
			printf("%s eh facil\n", sobrenome);
		} else {
			sobrenome[0] = toupper(sobrenome[0]);
			printf("%s nao eh facil\n", sobrenome);
		}
	}

	return 0;
}