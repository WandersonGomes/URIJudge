//PROBLEM 2803
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2803
#include <stdio.h>
#include <string.h>

//para limpar o buffer
char keyboard[BUFSIZ];

int main() {
    char regiao_norte[7][10] = {"roraima","acre","amapa","amazonas","para","rondonia","tocantins"};
    char estado[100];

    setbuf(stdin, keyboard);
    scanf("%[^\n]s", estado);

    int i = 0, flag = 1;
    for(; i < 7; i++) {
        if (strcmp(regiao_norte[i], estado) == 0){
            flag = 0;
            printf("Regiao Norte\n");
            break;
        }
    }

    if (flag) {
        printf("Outra regiao\n");
    }

    return 0;
}