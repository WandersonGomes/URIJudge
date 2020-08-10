//PROBLEM 2171
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2171
#include <stdio.h>

int main() {
    long int fink = 0, pica_pau = 0, total = 0, i = 0, aux = 0;

    while (1) {
        scanf("%ld", &total);
        if (total == 0) {
            break;
        }

        aux = total;
        pica_pau = 0;
        fink = 0;
        
        while (total > 0) {
            //pica pau
            total--;
            pica_pau++;

            //fink
            fink += pica_pau;
            total = total - pica_pau;
            
            //caso nao der para tirar do total o fink retira do pica-pau
            if (total < 0) {
                if ((-total) <= pica_pau) {
                    pica_pau = pica_pau + total;
                } else {
                    fink = aux;
                    pica_pau = 0;
                }
                break;
            }
        }
        
        //apresentando o resultado
        printf("%ld %ld\n", fink, pica_pau);
    }

    return 0;
}