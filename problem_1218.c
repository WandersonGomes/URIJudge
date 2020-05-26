#include <stdio.h>

//FUNCAO QUE CONVERTE ALGARISMO PARA SER RESPECTIVO NUMERO
int algarismoParaNumero(char algarismo) {
    switch (algarismo) {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
    }
}

//CONVERTE UMA STRING DE TAMANHO 2 PARA INTEIRO POSITIVO
int stringParaNumero(char string[2]) {
    int resultado = 0;
    resultado += algarismoParaNumero(string[0]) * 10;
    resultado += algarismoParaNumero(string[1]);
    return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
    int tamanho_procurado = 0, tamanho = 0;
    char tamanho_lido[2], sexo;
    char caractere, aux[5];
    int i = 0, caso = 1, flag_linha = 0;
    int feminino = 0, masculino = 0;

    while (scanf("%d%*c", &tamanho_procurado) != EOF) {
        do {
            //numero | espaco | sexo | ultimo caracteres (espaco em branco ou quebra de linha)
            for (i = 0; i < 5; i++) {
                scanf("%c", &caractere);
                aux[i] = caractere;
            }
            aux[4] = '\0'; //fecha a string

            //agora vamos verifica
            tamanho_lido[0] = aux[0];
            tamanho_lido[1] = aux[1];
            tamanho = stringParaNumero(tamanho_lido);
            if (tamanho == tamanho_procurado) {
                sexo = aux[3];
                if (sexo == 'F') {
                    feminino++;
                } else {
                    masculino++;
                }
            }

        } while (caractere != '\n');

        if (flag_linha) {
            printf("\n");
        }
        flag_linha = 1;

        printf("Caso %d:\n", caso);
        printf("Pares Iguais: %d\n", (feminino+masculino));
        printf("F: %d\n", feminino);
        printf("M: %d\n", masculino);

        feminino = 0;
        masculino = 0;

        caso++;
    }

    return 0;
}