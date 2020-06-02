//PROBLEM 2218
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2218 
//Obs.:
//Para saber mais sobre o assunto indico as seguintes aulas
//https://www.youtube.com/watch?v=NZWI6GIyUMo&list=PLrVGp617x0hAttp3LQVBBF2td1uHjfhbr&index=6
//https://www.youtube.com/watch?v=IT679ay8Y2s&list=PLrVGp617x0hAttp3LQVBBF2td1uHjfhbr&index=9
#include <stdio.h>

//RETORNA AS DIVISOES DO PLANO DADO UMA QUANTIDADE DE RETAS (TERMO)
int pizzaSteiner(int termo) {
    return ((termo*termo) + termo + 2)/2;
}

//PROGRAMA PRINCIPAL
int main() {
    int numero_retas = 0;
    int numero_testes = 0, i = 0;
    scanf("%d", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        scanf("%d", &numero_retas);

        printf("%d\n", pizzaSteiner(numero_retas));
    }

    return 0;
}