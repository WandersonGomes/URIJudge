//PROBLEM 1166
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1166
//Obs.:
/*
Gracas a dica em um outro problema do: https://www.urionlinejudge.com.br/judge/pt/profile/206657 (ARTANNYEL)
Apos calcular na mao os primeiros passos eu verifiquei uma sequencia nos resultados.
Fiz a submissao eh funcionou! :-) :-)
*/
#include <stdio.h>

#define MAX 51

int resultados_conhecidos[MAX];

//FUNCAO QUE PREENCHE OS RESULTADOS
void preencheResultados() {
    int i = 0, acrescimo = 4;
    resultados_conhecidos[0] = 0;
    resultados_conhecidos[1] = 1;
    resultados_conhecidos[2] = 3;
    resultados_conhecidos[3] = 7;
    resultados_conhecidos[4] = 11;

    for (i = 5; i < 51; i++) {
        if ((resultados_conhecidos[i-1] - resultados_conhecidos[i-2]) == (resultados_conhecidos[i-2] - resultados_conhecidos[i-3])) {
            acrescimo += 2;
        }
        resultados_conhecidos[i] = resultados_conhecidos[i-1] + acrescimo;
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int quantidade_numeros = 0, numero = 0;
    scanf("%d", &quantidade_numeros);
    
    preencheResultados();

    int i = 0;
    for (i = 0; i < quantidade_numeros; i++) {
        scanf("%d", &numero);
        printf("%d\n", resultados_conhecidos[numero]);
    }

    return 0;
}