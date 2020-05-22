//PROBLEM 1786
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1786
#include <stdio.h>
#include <string.h>

//FUNCAO QUE IMPRIME OS DIGITOS VERIFICADORES
void imprimeVerificadores(int cpf[9]) {
    //uso de mais variaveis em favor da legibilidade do codigo
    int soma1 = 0, soma2 = 0, i = 0, aux1 = 1, aux2 = 9;
    
    for (i = 0; i < 9; i++) {
        soma1 += (cpf[i] * aux1);
        soma2 += (cpf[i] * aux2);

        aux1++;
        aux2--;
    }

    //primeiro digito verificador
    if (soma1%11 == 10) {
        printf("0");
    } else {
        printf("%d", soma1%11);
    }

    if (soma2%11 == 10) {
        printf("0");
    } else {
        printf("%d", soma2%11);
    }
}

//FUNCAO QUE RETORNA O VALOR DO ALGARISMO
int algarismoNumero(char algarismo) {
    switch (algarismo)
    {
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

//limpa buffer
char keyboard[BUFSIZ];

//PROGRAMA PRINCIPAL
int main() {
    int cpf[9];
    char cpf_string[10];

    memset(cpf, 0, sizeof(cpf));

    while (scanf("%s", cpf_string) != EOF) {
        setbuf(stdin,keyboard);
        cpf[0] = algarismoNumero(cpf_string[0]);
        printf("%d", cpf[0]);
        cpf[1] = algarismoNumero(cpf_string[1]);
        printf("%d", cpf[1]);
        cpf[2] = algarismoNumero(cpf_string[2]);
        printf("%d", cpf[2]);
        
        printf(".");

        cpf[3] = algarismoNumero(cpf_string[3]);
        printf("%d", cpf[3]);
        cpf[4] = algarismoNumero(cpf_string[4]);
        printf("%d", cpf[4]);
        cpf[5] = algarismoNumero(cpf_string[5]);
        printf("%d", cpf[5]);

        printf(".");

        cpf[6] = algarismoNumero(cpf_string[6]);
        printf("%d", cpf[6]);
        cpf[7] = algarismoNumero(cpf_string[7]);
        printf("%d", cpf[7]);
        cpf[8] = algarismoNumero(cpf_string[8]);
        printf("%d", cpf[8]);

        printf("-");

        imprimeVerificadores(cpf);
        printf("\n");
    }

    return 0;
}