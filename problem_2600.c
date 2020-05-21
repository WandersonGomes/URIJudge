//PROBLEM 2600
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2600
#include <stdio.h>
#include <string.h>

#define MAX 6

//FUNCAO QUE VERIFICA SE AS FACES ESTAO NA POSICAO NORMAL DE UM DADO
int dadoNormal(long int faces[MAX]) {
    if ((faces[0] + faces[5]) != 7) {
        return 0;
    }

    if ((faces[1] + faces[3]) != 7) {
        return 0;
    }

    if ((faces[2] + faces[4]) != 7) {
        return 0;
    }

    return 1;
}


//PROGRAMA PRINCIPAL
int main() {
    int digitos[MAX], flag = 0, j = 0;
    long int faces[MAX];

    long int quantidade_testes = 0, i = 0;
    scanf("%d", &quantidade_testes);


    for (i = 0; i < quantidade_testes; i++) {
        flag = 0;
        memset(digitos, 0, sizeof(digitos));

        //leitura das faces
        scanf("%d", &faces[0]);
        scanf("%d %d %d %d", &faces[1], &faces[2], &faces[3], &faces[4]);
        scanf("%d", &faces[5]);

        //verifica se possui apenas valores [1,2,3,4,5,6]
        for (j = 0; j < MAX; j++) {
            if ((faces[j] > 0) && (faces[j] < 7)) {
                if (digitos[faces[j]-1] == 1) {
                    flag = 1;
                    break;
                } else {
                    digitos[faces[j]-1] = 1;
                }
            } else {
                flag = 1;
                break;
            }
        }

        //se nao passou no primeiro teste
        if (flag) {
            printf("NAO\n");
        } else {
            //verifica se as faces estao nas posicoes corretas
            if (dadoNormal(faces)) {
                printf("SIM\n");
            } else {
                printf("NAO\n");
            }
        }
    }

    return 0;
}