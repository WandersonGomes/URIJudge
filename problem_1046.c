//PROBLEM 1046
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1046
#include <stdio.h>

int main() {
    //dados
    int hora_inicio, hora_final;
    int qtd_horas;

    //leitura
    scanf("%d %d", &hora_inicio, &hora_final);

    //processamento
    if (hora_inicio < hora_final)
        qtd_horas = hora_final - hora_inicio;
    else
        qtd_horas = (hora_final + 24) - hora_inicio;

    //saida
    printf("O JOGO DUROU %d HORA(S)\n", qtd_horas);

    return 0;
}