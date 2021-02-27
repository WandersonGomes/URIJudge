//PROBLEM 3170
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3170
#include <stdio.h>

int main() {
	int bolas = 0, galhos = 0;
	int metade = 0;

	scanf("%d", &bolas);
	scanf("%d", &galhos);

	metade = galhos/2;

	if (bolas < metade)
		printf("Faltam %d bolinha(s)\n", metade - bolas);
	else
		printf("Amelia tem todas bolinhas!\n");

	return 0;
}