//PROBLEM 2728
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2728
#include <stdio.h>
#include <string.h>
#include <ctype.h> //para poder usar tolower()

#define MAX 51

//FUNCAO QUE INFORMA SE ALGUMA LETRA INFORMADA EH IGUAL A POSICAO CORRETA DA PALAVRA COBOL
int letraCorreta(char letra1, char letra2, int posicao) {
    letra1 = tolower(letra1);
    letra2 = tolower(letra2);

    switch (posicao) {
        case 0:
            if ((letra1 == 'c') || (letra2 == 'c'))
                return 1;
            break;
        case 1:
            if ((letra1 == 'o') || (letra2 == 'o'))
                return 1;
            break;
        case 2:
            if ((letra1 == 'b') || (letra2 == 'b'))
                return 1;
            break;
        case 3:
            if ((letra1 == 'o') || (letra2 == 'o'))
                return 1;
            break;
        case 4:
            if ((letra1 == 'l') || (letra2 == 'l'))
                return 1;
            break;
        default:
            return 0;
    }
    
    return 0;
}

//PROGRAMA PRINCIPAL
int main() {
    char entrada[MAX];
    int tamanho = 0, i = 0, j = 0, flag = 0;
    char primeira_letra = 'a', ultima_letra = 'a', letra_anterior = 0;

    while (scanf("%s", entrada) != EOF) {
        j = 0;
        flag = 0;

        tamanho = strlen(entrada);

        for (i = 0; i < 5; i++) {
            primeira_letra = entrada[j];
            while ((entrada[j] != '-') && (j < tamanho)) {
                j++;
            }
            j++;
            ultima_letra = entrada[j-2];

            if (!letraCorreta(primeira_letra, ultima_letra, i)) {
                flag = 1;
            }
        }

        if (flag) {
            printf("BUG\n");
        } else {
            printf("GRACE HOPPER\n");
        }
    }

    return 0;
}