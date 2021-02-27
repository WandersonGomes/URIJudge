//PROBLEM 3174
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3174
#include <stdio.h>
#include <string.h>

int main() {
	int qtd_elfos = 0, i = 0;
	char grupo[12];
	int horas = 0;
	int bonecos_horas = 0, arquitetos_horas = 0, musicos_horas = 0, desenhistas_horas = 0;
	int qtd_brinquedos = 0;

	scanf("%d", &qtd_elfos);
	getchar();

	for(; i < qtd_elfos; i++) {
		scanf("%*s %s %d", grupo, &horas);
	
		if (!strcmp(grupo, "bonecos"))
			bonecos_horas += horas;
		else if (!strcmp(grupo, "arquitetos"))
			arquitetos_horas += horas;
		else if (!strcmp(grupo, "musicos"))
			musicos_horas += horas;
		else if (!strcmp(grupo, "desenhistas"))
			desenhistas_horas += horas;
	}

	qtd_brinquedos += bonecos_horas/8;
	qtd_brinquedos += arquitetos_horas/4;
	qtd_brinquedos += musicos_horas/6;
	qtd_brinquedos += desenhistas_horas/12;

	printf("%d\n", qtd_brinquedos);
	return 0;
}