//PROBLEM 3137
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3137
/*
Obs.:
Para um maior entendimento por favor veja esta video aula (ingles):
https://youtu.be/OG0h5xD_f9Y
*/
#include <stdio.h>

//FUNCAO QUE RETORNA O NUMERO DE DIGITOS
long long int numeroDigitos(long long int numero) {
    int aux = 0;

    if (numero < 10) 
        return numero;
    aux = 9;

    if (numero < 100)
        return ((numero - 10 + 1) * 2) + aux;
    aux += ((99 - 10 + 1) * 2);

    if (numero < 1000)
        return ((numero - 100 + 1) * 3) + aux;
    aux += ((999 - 100 + 1) * 3);

    if (numero < 10000) 
        return ((numero - 1000 + 1) * 4) + aux;
    aux += ((9999 - 1000 + 1) * 4);

    if (numero < 100000)
        return ((numero - 10000 + 1) * 5) + aux;
    aux += ((99999 - 10000 + 1) * 5);

    if (numero < 1000000)
        return ((numero - 100000 + 1) * 6) + aux; 
}

//PROGRAMA PRINCIPAL
int main() {
    long long int numero = 0;

    scanf("%lld", &numero);

    printf("%lld\n", numeroDigitos(numero));

    return 0;
}