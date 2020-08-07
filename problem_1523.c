//PROBLEM 1523
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1523
#include <stdio.h>

#define MAX 1000

int main() {
    int numero_carros = 0, numero_vagas = 0, i = 0;
    int vagas_ocupadas = 0;
    int entrada = 0, saida = 0, flag = 0;
    int tempo[MAX][2];

    while (1) {
        scanf("%d %d", &numero_carros, &numero_vagas);
        if ((numero_carros == 0) && (numero_vagas == 0)) {
            break;
        }

        vagas_ocupadas = 0;
        flag = 0;

        for (i = 0; i < numero_carros; i++) {
            scanf("%d %d", &entrada, &saida);

            if (flag == 0) {
                //se nao tiver nenhum carro no estacionamento
                if (vagas_ocupadas == 0) {
                    tempo[0][0] = entrada;
                    tempo[0][1] = saida;
                    vagas_ocupadas++;
                } else {
                    //se ja estiver carro dentro do estacionamento
                    //se o tempo de chegada for maior do que o tempo de saida
                    //do ultimo carro
                    if (entrada >= tempo[vagas_ocupadas-1][1]) {
                        while ((vagas_ocupadas > 0) && (entrada >= tempo[vagas_ocupadas - 1][1])) {
                            vagas_ocupadas--;
                        }
                    }
                    tempo[vagas_ocupadas][0] = entrada;
                    tempo[vagas_ocupadas][1] = saida;
                    vagas_ocupadas++;

                    //se o carro quando for colocado vai sair primeiro do carro 
                    //que ja esta no estacionamento
                    if (vagas_ocupadas > 1) {
                        if (saida > tempo[vagas_ocupadas - 2][1]) {
                            flag = 1;
                        }    
                    }

                    //se a quantidade de carros ultrapassa a capacidade
                    if (vagas_ocupadas > numero_vagas) {
                        flag = 1;
                    }
                }
            }
        }
        
        //apresenta o resultado
        if (flag) {
            printf("Nao\n");
        } else {
            printf("Sim\n");
        }
    }

    return 0;
}