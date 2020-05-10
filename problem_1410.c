//PROBLEM 1410
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1410
#include <stdio.h>

#define MAX 10001

//FUNCAO QUE RETORNA SE TA OU NAO IMPEDIDO
int impedido(int atacante, int defensor1, int defensor2) {
    //atras dos defensores
    if ((atacante > defensor1) && (atacante > defensor2)) {
        return 0;
    }

    //na mesma linha dos defensores
    if ((atacante == defensor1) && (atacante == defensor2)) {
        return 0;
    }

    //mesma linha do penultimo defensor
    if (atacante == defensor2) {
        return 0;
    }

    return 1;
}


//PROGRAMA PRINCIPAL
int main() {
    int quantidade_atacantes = 0, quantidade_defensores = 0;
    int atacante_mais_avancado = 0, atacante = 0;
    int defensor = 0, defensor1 = 0, defensor2 = 0;
    int i = 0, tmp = 0;

    while (1) {
        atacante_mais_avancado = MAX;
        defensor1 = MAX;
        defensor2 = MAX;

        scanf("%d %d", &quantidade_atacantes, &quantidade_defensores);
        if ((quantidade_atacantes == 0) && (quantidade_defensores == 0)) {
            break;
        }

        //pega o atacante mais avancado
        for (i = 0; i < quantidade_atacantes; i++) {
            scanf("%d", &atacante);
            if (atacante < atacante_mais_avancado) {
                atacante_mais_avancado = atacante;
            }
        }

        //pega os dois defensores mais recuados
        for (i = 0; i < quantidade_defensores; i++) {
            scanf("%d", &defensor);

            if (defensor < defensor1) {
                tmp = defensor1;
                defensor1 = defensor;
                defensor2 = tmp;
            } else if (defensor < defensor2) {
                defensor2 = defensor;
            }
        }

        //apresenta o resultado
        if (impedido(atacante_mais_avancado, defensor1, defensor2)) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
}