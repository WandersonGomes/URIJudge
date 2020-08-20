//PROBLEM 1816
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1816
#include <stdio.h>

//PROGRAMA PRINCIPAL
int main() {
    int numero_letras = 0, instancia = 1;
    int indice = 0, i = 0, j = 0, tmp = 0;
    char alfabeto[26];

    while (1) {
        //captura a quantidade de letras
        scanf("%d", &numero_letras);
        if (numero_letras == 0) {
            break;
        }

        //inicializa o alfabeto
        for (i = 0; i < 26; i++) {
            alfabeto[i] = i + 65;
        }

        printf("Instancia %d\n", instancia);
        instancia++;

        for (i = 0; i < numero_letras; i++) {
            scanf("%d", &indice);
            indice--;
            printf("%c", alfabeto[indice]);
            
            //reorganiza a posicao das letras no alfabeto
            tmp = alfabeto[indice];
            for (j = indice; j > 0; j--) {
                alfabeto[j] = alfabeto[j - 1];
            }
            alfabeto[0] = tmp;
        }

        printf("\n\n");
    }

    return 0;
}