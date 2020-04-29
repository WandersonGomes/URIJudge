//PROBLEM 3055
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3055
#include <stdio.h>

int main() {
    int nota1 = 0;
    int media = 0;

    scanf("%d", &nota1);
    scanf("%d", &media);

    printf("%d\n",((2*media) - nota1));

    return 0;
}