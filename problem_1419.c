//PROBLEM 1419
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1419
#include <stdio.h>

//FUNCAO QUE RETORNA QUEM CONSEGUIU OS 30 PONTOS ADICIONAIS
int pontosAdicionais(int mark, int leti) {
    if (mark == leti) {
        return 0;
    }
    if ((mark != 0) && (leti == 0)) {
        return 1;
    }
    if ((leti != 0) && (mark == 0)) {
        return 2;
    }
    if (mark < leti) {
        return 1;
    } else {
        return 2;
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int numero_rodadas = 0, i = 0;
    int pontos_mark = 0, pontos_leti = 0;
    int jogadas_mark[10] = {0}, jogadas_leti[10] = {0};
    int flag_mark = 0, flag_leti = 0, tmp = 0;

    while (1) {
        //leitura do numero de rodadas
        scanf("%d", &numero_rodadas);
        if (numero_rodadas == 0) {
            break;
        }

        //inicializacao dos pontos
        pontos_leti = 0;
        pontos_mark = 0;
        flag_mark = 0;
        flag_leti = 0;

        //jogadas de cada jogador
        for (i = 0; i < numero_rodadas; i++) {
            scanf("%d", &jogadas_mark[i]);
            pontos_mark += jogadas_mark[i];
            if (i > 1 && flag_mark == 0) {
                if ((jogadas_mark[i] == jogadas_mark[i-1]) && (jogadas_mark[i-1] == jogadas_mark[i-2])) {
                    flag_mark = i;
                }
            }
        }
        for (i = 0; i < numero_rodadas; i++) {
            scanf("%d", &jogadas_leti[i]);
            pontos_leti += jogadas_leti[i];
            if (i > 1 && flag_leti == 0) {
                if ((jogadas_leti[i] == jogadas_leti[i-1]) && (jogadas_leti[i-1] == jogadas_leti[i-2])) {
                    flag_leti = i;
                }
            }
        }

        tmp = pontosAdicionais(flag_mark, flag_leti);
        
        if (tmp == 1) {
            pontos_mark += 30;
        } else if (tmp == 2) {
            pontos_leti += 30;
        }

//        printf("TMP = %d, MARK = %d, LETI = %d\n", tmp, pontos_mark, pontos_leti);

        if (pontos_leti > pontos_mark) {
            printf("L\n");
        } else if (pontos_mark > pontos_leti) {
            printf("M\n");
        } else {
            printf("T\n");
        }
    }
    
    return 0;
}