//PROBLEM 3157
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3147
#include <stdio.h>

int main() {
    int humanos = 0, elfos = 0, anoes = 0, orcs = 0, wargs = 0, aguias = 0;
    int exercito_bem = 0, exercito_mal = 0;

    scanf("%d %d %d %d %d %d", &humanos, &elfos, &anoes, &orcs, &wargs, &aguias);

    exercito_bem = humanos + elfos + anoes + aguias;
    exercito_mal = orcs + wargs;

    if (exercito_bem >= exercito_mal) {
        printf("Middle-earth is safe.\n");
    } else {
        printf("Sauron has returned.\n");
    }

    return 0;
}