//PROBLEM 1582
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1582
//Obs.:
/*
Para saber mais sobre o assunto acesse essa video aula espetacular:
https://www.youtube.com/watch?v=o7axIIFY3Ko&t=338s
*/
#include <stdio.h>

//FUNCAO QUE RETORNA O MDC
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }

    return mdc(b, a%b);
}

//FUNCAO QUE INFORMA SE FORMA UM TRIANGULO RETANGULO
int formaTrianguloRetangulo(int a, int b, int c) {
    if ((a*a) == ((b*b) + (c*c))) {
        return 1;
    }
    if ((b*b) == ((a*a) + (c*c))) {
        return 1;
    }
    if ((c*c) == ((b*b)+ (a*a))) {
        return 1;
    }

    return 0;
}


//PROGRAMA PRINCIPAL
int main() {
    int numero1 = 0, numero2 = 0, numero3 = 0;

    while(scanf("%d %d %d", &numero1, &numero2, &numero3) != EOF) {
        if (formaTrianguloRetangulo(numero1, numero2, numero3)) {
            if (mdc(mdc(numero1, numero2), numero3) == 1) {
                printf("tripla pitagorica primitiva\n");
            } else {
                printf("tripla pitagorica\n");
            }
        } else {
            printf("tripla\n");
        }     
    }
}