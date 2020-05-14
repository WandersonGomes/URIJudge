//PROBLEM 2227
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2227
#include <stdio.h>
#include <string.h>

#define MAX 101

int main() {
    long long int aeroppotos[MAX];
    int numero_aeroportos = 0, numero_voos = 0;
    int origem = 0, destino = 0;
    long long int maior_movimento = 0;
    int i = 0, teste = 1;

    while (1) {
        scanf("%d %d", &numero_aeroportos, &numero_voos);
        if ((numero_aeroportos == 0) && (numero_voos == 0)) {
            break;
        }

        //zera todos os aeroportos
        memset(aeroppotos, 0, sizeof(aeroppotos));

        for (i = 0; i < numero_voos; i++) {
            scanf("%d %d", &origem, &destino);
            aeroppotos[origem]++;
            aeroppotos[destino]++;
        }

        maior_movimento = 0;
        for (i = 1; i <= numero_aeroportos; i++) {
            if (aeroppotos[i] > maior_movimento){
                maior_movimento = aeroppotos[i];
            }
        }

        printf("Teste %d\n", teste);
        for (i = 1; i <= numero_aeroportos; i++) {
            if (aeroppotos[i] == maior_movimento) {
                printf("%d ", i);
            }
        }
        printf("\n\n");

        teste++;
    }

    return 0;
}