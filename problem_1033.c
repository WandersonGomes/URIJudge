//PROBLEM 1033
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1033
/*
Fontes de estudo:
    https://pt.wikipedia.org/wiki/N%C3%BAmeros_de_Leonardo
    https://pt.wikipedia.org/wiki/Aritm%C3%A9tica_modular#:~:text=Em%20matem%C3%A1tica%2C%20aritm%C3%A9tica%20modular%20(chamada,um%20certo%20valor%2C%20o%20m%C3%B3dulo.
    https://www.blogcyberini.com/2018/04/numeros-de-fibonacci-com-potenciacao-de-matrizes.html#:~:text=Ou%20seja%2C%20se%20quisermos%20calcular,%C3%A9%20um%20pouco%20mais%20eficaz).
    https://www.blogcyberini.com/2017/10/potenciacao-de-matrizes.html
*/
#include <stdio.h>

//FUNCOES
void multiplicarMatrizesOrdem2Modulo(long long matrizA[2][2], long long matrizB[2][2], long long matrizResultado[2][2], long long modulo) {
    long long a11 = (matrizA[0][0] * matrizB[0][0] + matrizA[0][1] * matrizB[1][0]) % modulo;
    long long a12 = (matrizA[0][0] * matrizB[0][1] + matrizA[0][1] * matrizB[1][1]) % modulo;
    long long a21 = (matrizA[1][0] * matrizB[0][0] + matrizA[1][1] * matrizB[1][0]) % modulo;
    long long a22 = (matrizA[1][0] * matrizB[0][1] + matrizA[1][1] * matrizB[1][1]) % modulo;

    matrizResultado[0][0] = (a11 < 0) ? (a11 + modulo) : a11;
    matrizResultado[0][1] = (a12 < 0) ? (a12 + modulo) : a12;
    matrizResultado[1][0] = (a21 < 0) ? (a21 + modulo) : a21;
    matrizResultado[1][1] = (a22 < 0) ? (a22 + modulo) : a22;
}

long long fibonacciLog(long long numero, long long modulo) {
    if (numero < 2)
        return numero;
    
    long long matrizBase[2][2] = {{0, 1}, {1, 1}};
    long long matrizPotencia[2][2] = {{1, 0}, {0, 1}};

    while (numero > 0) {
        if ((numero % 2) != 0)
            multiplicarMatrizesOrdem2Modulo(matrizPotencia, matrizBase, matrizPotencia, modulo);
        multiplicarMatrizesOrdem2Modulo(matrizBase, matrizBase, matrizBase, modulo);
        numero = numero/2;
    }

    return matrizPotencia[0][1];
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    long long numero, base, caso = 1;
    long long temporario;      

    //leitura - processamento - saida
    while (1) {
        scanf("%lld %lld", &numero, &base);

        if (numero == 0 && base == 0)
            break;
        
        temporario = (2 * fibonacciLog(numero + 1, base)) % base;
        if (!temporario)
            temporario = base;

        printf("Case %lld: %lld %lld %lld\n", caso++, numero, base, temporario - 1);
    }

    return 0;
}