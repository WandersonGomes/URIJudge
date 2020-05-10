//PROBLEM 1615
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1615
#include <stdio.h>
#include <string.h> //usada para usar a funcao memset

#define MAX 10

int main() {
    int i = 0, j = 0;
    long int candidatos_votos[MAX], quantidade_eleitores = 0, maior_quantidade_votos = 0;
    int quantidade_candidatos = 0, candidato = 0, candidato_mais_votado = 0;
    
    int quantidade_testes = 0;
    scanf("%d", &quantidade_testes);
    
    for (i = 0; i < quantidade_testes; i++) {
        candidato_mais_votado = 0;
        maior_quantidade_votos = 0;

        memset(candidatos_votos, 0, sizeof(candidatos_votos)); //zera os votos

        scanf("%d %ld", &quantidade_candidatos, &quantidade_eleitores);
        
        for (j = 0; j < quantidade_eleitores; j++) {
            scanf("%d", &candidato);
            candidatos_votos[candidato-1]++; //adiciona voto ao candidato
        }

        //verifica o candidato mais votado
        for (j = 0; j < quantidade_candidatos; j++) {
            if (candidatos_votos[j] > maior_quantidade_votos) {
                maior_quantidade_votos = candidatos_votos[j];
                candidato_mais_votado = j + 1;
            }
        }

        //informa o candidato vencedor ou se tera segundo turno
        if (maior_quantidade_votos > (quantidade_eleitores/2.0)) {
            printf("%d\n", candidato_mais_votado);
        } else {
            printf("-1\n");
        }

    }
    
    return 0;
}