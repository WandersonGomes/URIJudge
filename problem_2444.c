//PROBLEM 2444
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2444
#include <stdio.h>

int main() {
    int volume = 0;
    int numero_mudancas_volume = 0;
    int alteracao = 0;
    int i = 0;

    scanf("%d %d", &volume, &numero_mudancas_volume);

    for (i = 0; i < numero_mudancas_volume; i++) {
        scanf("%d", &alteracao);
        volume += alteracao;

        if (volume < 0) {
            volume = 0;
        } else if (volume > 100) {
            volume = 100;
        }
    }

    printf("%d\n", volume);

    return 0;
}