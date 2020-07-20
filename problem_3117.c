//PROBLEM 3117
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3117
#include <stdio.h>

int main() {
    long long int numero_alunos = 0, quantidade_minima = 0, presentes = 0, i = 0;
    int horario = 0;
    scanf("%lld %lld", &numero_alunos, &quantidade_minima);

    for (i = 0; i < numero_alunos; i++) {
        scanf("%d", &horario);
        if (horario <= 0) {
            presentes++;
        }
    }

    if (presentes >= quantidade_minima) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}