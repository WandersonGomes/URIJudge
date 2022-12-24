//PROBLEM 1061
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1061
#include <stdio.h>

//FUNCOES
void limparBuffer() {
    char c;
    while ((c = getchar()) != EOF && c != '\n');
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    long long total_segundos_inicio,
              total_segundos_fim,
              total_segundos_duracao;

    int dia_inicio, dia_fim;
    int hora_inicio, hora_fim;
    int minuto_inicio, minuto_fim;
    int segundo_inicio, segundo_fim;

    int dias_duracao,
        horas_duracao,
        minutos_duracao,
        segundos_duracao;

    //leitura
    scanf("Dia %d", &dia_inicio);
    scanf("%d : %d : %d", &hora_inicio, &minuto_inicio, &segundo_inicio);

    limparBuffer();

    scanf("Dia %d", &dia_fim);
    scanf("%d : %d : %d", &hora_fim, &minuto_fim, &segundo_fim);

    //processamento
    total_segundos_inicio = dia_inicio * 24 * 60 * 60 +
                            hora_inicio * 60 * 60 +
                            minuto_inicio * 60 +
                            segundo_inicio;
    
    total_segundos_fim = dia_fim * 24 * 60 * 60 +
                         hora_fim * 60 * 60 +
                         minuto_fim * 60 +
                         segundo_fim;

    //verificacao extra
    if (total_segundos_inicio < total_segundos_fim)
        total_segundos_duracao = total_segundos_fim - total_segundos_inicio;
    else
        total_segundos_duracao = total_segundos_inicio - total_segundos_fim;

    dias_duracao = total_segundos_duracao / (24 * 60 * 60);
    total_segundos_duracao = total_segundos_duracao % (24 * 60 * 60);

    horas_duracao = total_segundos_duracao / (60 * 60);
    total_segundos_duracao = total_segundos_duracao % (60 * 60);

    minutos_duracao = total_segundos_duracao / 60;
    total_segundos_duracao = total_segundos_duracao % 60;

    segundos_duracao = total_segundos_duracao;

    //saida
    printf("%d dia(s)\n", dias_duracao);
    printf("%d hora(s)\n", horas_duracao);
    printf("%d minuto(s)\n", minutos_duracao);
    printf("%d segundo(s)\n", segundos_duracao);

    return 0;
}