//PROBLEM 1307
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1307
#include <stdio.h>
#include <string.h>

#define MAX 31

//FUNCAO QUE RETORNA O MDC
int mdc(int numero1, int numero2) {
    if (numero2 == 0) {
        return numero1;
    }
    return mdc(numero2, numero1%numero2);
}

//FUNCAO QUE RETORNA VALOR INTEIRO DO VALOR BINARIO EM CHAR
int binarioInteiro(char *binario) {
    int tamanho = strlen(binario), i = 0;
    int resultado = 0, base = 1;

    for (i = (tamanho - 1); i > -1; i--) {
        if (binario[i] == '1') {
            resultado += base;
        }
        base = base * 2;
    }

    return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
    int numero_testes = 0, i = 0;
    char binario1[MAX], binario2[MAX];
    int decimal1 = 0, decimal2 = 0, mdc_numeros = 0;
    
    //quantidade de testes
    scanf("%d", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        //ler os numeros em binarios
        scanf("%s", binario1);
        scanf("%s", binario2);

        //conversao de binario para decimal
        decimal1 = binarioInteiro(binario1);
        decimal2 = binarioInteiro(binario2);
        mdc_numeros = mdc(decimal1, decimal2);

        //apresenta o resultado
        printf("Pair #%d: ", (i+1));
        if (mdc_numeros > 1) {
            printf("All you need is love!\n");
        } else {
            printf("Love is not all you need!\n");
        }
    }

    return 0;
}