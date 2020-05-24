//PROBLEM 2714
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2714
#include <stdio.h>
#include <string.h>

#define MAX 101

//FUNCAO QUE INFORMA SE EH DIGITO
int ehDigito(char algarismo) {
    if ((algarismo > 47) && (algarismo < 58)) {
        return 1;
    }

    return 0;
}

char keyboard[BUFSIZ];

//PROGRAMA PRINCIPAL
int main() {
    int quantidade_ras = 0, i = 0, j = 0, tamanho = 0, flag = 0;
    char ra[MAX];

    scanf("%d", &quantidade_ras);
    for (i = 0; i < quantidade_ras; i++) {
        flag = 1;
        scanf("%s", ra);
        setbuf(stdin, keyboard);

        tamanho = strlen(ra);

        //verifica o tamanho da senha
        if (tamanho != 20) {
            printf("INVALID DATA\n");
        } else {
            //verifica se tem R e A no inicio
            if ((ra[0] != 'R') || (ra[1] != 'A')) {
                printf("INVALID DATA\n");
            } else {
                //verifica se eh apenas digitos o restante
                for (j = 2; j < tamanho; j++) {
                    if (!ehDigito(ra[j])) {
                        flag = 0;
                    }
                }

                if (flag) {
                    flag = 0;
                    //verifica se tem algum digito diferente de zero
                    //e comeca a imprimir caso tenha
                    for (j = 2; j < tamanho; j++) {
                        if ((flag) || (ra[j] != '0')) {
                            printf("%c", ra[j]);
                            flag = 1;
                        }
                    }
                    //caso so tenha digitos zeros
                    if (!flag) {
                        printf("INVALID DATA");
                    }
                    printf("\n");
                } else {
                    printf("INVALID DATA\n");
                }
            }
        }
    }

    return 0;
}