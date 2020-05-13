//PROBLEM 1371
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1371
//Obs.: 
//Se deseja saber mais sobre o assunto eu indico a seguinte aula:
//https://www.youtube.com/watch?v=o7axIIFY3Ko&t=338s
#include <stdio.h>

int main() {
    long long int numero = 0, tmp = 0;
    int flag = 0;

    while (1) {
        scanf("%lld", &numero);
        if (numero == 0) {
            break;
        }

        flag = 0;
        tmp = 1;
        while ((tmp*tmp) <= numero) {
            if (flag) {
                printf(" ");
            }

            printf("%lld", (tmp*tmp));   
            flag = 1;
            tmp++;
        }
        printf("\n");
    }
    
    return 0;
}