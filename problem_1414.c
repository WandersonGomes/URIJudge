//PROBLEM 1414
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1414
#include <stdio.h>

#define MAX 11

int main() {
	int numero_times = 0, numero_partidas = 0;
	char time[MAX];	
	int total_pontos = 0, pontos = 0, i = 0;	
	
	while (1) {
		scanf("%d %d", &numero_times, &numero_partidas);
		
		if (numero_times == 0) {
			break;
		}
		
		total_pontos = 0;
		for (i = 0; i < numero_times; i++) {
			scanf("%s %d", time, &pontos);
			total_pontos += pontos;
		}			
		
		printf("%d\n", ((numero_partidas * 3) - total_pontos));
	}
	
	return 0;
}