//PROBLEM 2189
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2189
#include <stdio.h>

int main(){
    long int numero_participantes = 0;
    long int participante = 0, vencedor = 0, i = 0, teste = 0;

    teste  = 1;
    while (1) {
        scanf("%ld", &numero_participantes);
        if (numero_participantes == 0) {
            break;
        }

        for (i = 1; i <= numero_participantes; i++) {
            scanf("%ld", &participante);
            if (participante == i) {
                vencedor = participante;
            }
        }
        
        printf("Teste %ld\n", teste);
        printf("%ld\n\n", vencedor);

        teste++;
    }
    
    return 0;
}