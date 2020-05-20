//PROBLEM 2134
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2134
#include <stdio.h>
#include <string.h>

int main() {
	int numero_alunos = 0;
	char nome_aluno[21], aluno_reprovado[21];
	int menor_nota = 0, nota = 0;
	int i = 0, instancia = 1;

	while (scanf("%d%*c", &numero_alunos) != EOF) {
		menor_nota = 11;

		for (i = 0; i < numero_alunos; i++) {
			scanf("%s %d", nome_aluno, &nota);
			if (nota < menor_nota) {
				menor_nota = nota;
				strcpy(aluno_reprovado, nome_aluno);
			} else if (nota == menor_nota) {
				if (strcmp(aluno_reprovado, nome_aluno) < 0) {
					strcpy(aluno_reprovado, nome_aluno);
				}
			}
		}

		printf("Instancia %d\n", instancia);
		printf("%s\n\n", aluno_reprovado);
		instancia++;
	}

	return 0;
}