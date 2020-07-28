//PROBLEM 1266
//link = https://www.urionlinejudge.com.br/judge/pt/questions/view/1266/256
/*
CASO 1:
0 0 0 = 0 1 0
CASO 2:
0 0 1 = 1 0 1
CASO 3:
1 0 0 = 1 0 1
*/
#include <stdio.h>

#define MAX 5000

//FUNCAO QUE RETORNA QUAL POSICAO TEM QUE SER COLOCADA A ESTACA
int colocaEstaca(int configuracao[3], int p1, int p2, int p3) {
    //caso 1
    if ((configuracao[0] == 0) && (configuracao[1] == 0) && (configuracao[2] == 0)) {
        return p2;
    }
    //caso 2
    if ((configuracao[0] == 0) && (configuracao[1] == 0) && (configuracao[2] == 1)) {
        return p1;
    }
    //caso 3
    if ((configuracao[0] == 1) && (configuracao[1] == 0) && (configuracao[2] == 0)) {
        return p3;
    }
    
    return -1;
}

//PROGRAMA PRINCIPAL
int main() {
    int cerca[5000], numero_postes = 0, i = 0;
    int posicao_troca = 0, aux[3];
    int resultado = 0;

    while (1) {
        //leitura de quantos poste a cerca era constituida
        scanf("%d", &numero_postes);
        if (!numero_postes) {
            break;
        }

        //ler o estado de cada poste da cerca
        for (i = 0; i < numero_postes; i++) {
            scanf("%d", &cerca[i]);
        }

        //realiza a colocao das estacas de madeira e verifica quantas estacas serao necessarias
        resultado = 0;
        for (i = 0; i < numero_postes; i++) {
            aux[0] = cerca[i];
            aux[1] = cerca[(i+1)%numero_postes];
            aux[2] = cerca[(i+2)%numero_postes];

            posicao_troca = colocaEstaca(aux, i, (i+1)%numero_postes, (i+2)%numero_postes);

            if (posicao_troca > -1) {
                cerca[posicao_troca] = 1;
                resultado++;
            }
        }

        //apresenta o resultado
        printf("%d\n", resultado);
    }

    return 0;
}