//PROBLEM 1547
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1547
#include <stdio.h>

#define MAX 101

//FUNCAO QUE RETORNA O VALOR ABSOLUTO DE UM NUMERO
int abs(int a) {
    if (a < 0) {
        return (-1)*a;
    }
    return a;
}

//PROGRAMA PRINCIPAL
int main() {
    int quantidade_alunos_grupo = 0, numero_sorteado = 0, palpite = 0;
    int vencedor = 0, palpite_vencedor = MAX;
    int numero_camisetas = 0, i = 0, j = 0;
    scanf("%d", &numero_camisetas);

    for (i = 0; i < numero_camisetas; i++) {
        palpite_vencedor = MAX;
        scanf("%d %d", &quantidade_alunos_grupo, &numero_sorteado);
        
        for (j = 0; j < quantidade_alunos_grupo; j++) {
            scanf("%d", &palpite);

            if (abs(numero_sorteado - palpite) < palpite_vencedor) {
                palpite_vencedor = abs(numero_sorteado - palpite);
                vencedor = j + 1;
            }
        }

        printf("%d\n", vencedor);
    }

    return 0;
}