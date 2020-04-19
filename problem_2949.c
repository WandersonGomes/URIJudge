//PROBLEM 2949
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2949
#include <stdio.h>

#define ANAO 'A'
#define ELFOS 'E'
#define HUMANOS 'H'
#define MAGOS 'M'
#define HOBBIT 'X'


//PROGRAMA PRINCIPAL
int main() {
    int hobbits = 0, humanos = 0, elfos = 0, anoes = 0, magos = 0;
    int quantidade_pessoas = 0;
    scanf("%d", &quantidade_pessoas);
    char tmp[2], tipo;

    int i = 0;
    for (; i < quantidade_pessoas; i++) {
        scanf("%*s %c", &tipo);

        switch (tipo)
        {
            case HOBBIT:
                hobbits++;
                break;
                
            case HUMANOS:
                humanos++;
                break;

            case ELFOS:
                elfos++;
                break;

            case ANAO:
                anoes++;
                break;

            case MAGOS:
                magos++;
                break;
        }
    }

    printf("%d Hobbit(s)\n", hobbits);
    printf("%d Humano(s)\n", humanos);
    printf("%d Elfo(s)\n", elfos);
    printf("%d Anao(s)\n", anoes);
    printf("%d Mago(s)\n", magos);

    return 0;
}