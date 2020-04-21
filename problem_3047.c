//PROBLEM 3047
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3047
//Obs.: Utilizando mais funcoes para maior legibilidade do codigo
#include <stdio.h>

//FUNCAO MAX
int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

//FUNCAO QUE RETORNA O VALOR DA MAIOR IDADE
int maiorIdade(int idade1, int idade2, int idade3) {
    return max(idade1, max(idade2, idade3));
}

//PROGRAMA PRINCIPAL
int main() {
    int idade_dona_monica = 0, idade_filho1 = 0, idade_filho2 = 0, idade_filho3 = 0;
    
    scanf("%d", &idade_dona_monica);
    scanf("%d", &idade_filho1);
    scanf("%d", &idade_filho2);
    
    idade_filho3 = idade_dona_monica - (idade_filho1 + idade_filho2);

    printf("%d\n", maiorIdade(idade_filho1, idade_filho2, idade_filho3));

    return 0;
}