//PROBLEM 1836
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1836
#include <stdio.h>
#include <math.h>

//POKEMON
typedef struct {
    char nome[51];
    int nivel;
    int hp;
    int at;
    int df;
    int sp;
} Pokemon;

//FUNCAO PARA O CALCULO DO ATRIBUTO
int calculaAtributo(int bs, int iv, int ev, int level) {
    double auxiliar = iv + bs + (sqrt(ev)/8);
    auxiliar *= level;
    auxiliar = auxiliar/50.00;
    return (int) auxiliar + 5; 
}

//FUNCAO QUE CALCULA O hp
int calculaHP(int bs, int iv, int ev, int level) {
    double hp = iv + bs + (sqrt(ev)/8) + 50;
    hp *= level;
    hp = hp/50.00;
    return (int) hp + 10;
}

//PROGRAMA PRINCIPAL
int main() {
    int qtd_pokemons = 0, teste = 0;
    int bs = 0, iv = 0, ev = 0;
    Pokemon pokemon;

    scanf("%d", &qtd_pokemons);

    for (teste = 1; teste <= qtd_pokemons; teste++) {
        scanf(" %s %d", pokemon.nome, &pokemon.nivel);
        scanf("%d %d %d", &bs, &iv, &ev);
        pokemon.hp = calculaHP(bs, iv, ev, pokemon.nivel);
        scanf("%d %d %d", &bs, &iv, &ev);
        pokemon.at = calculaAtributo(bs, iv, ev, pokemon.nivel);
        scanf("%d %d %d", &bs, &iv, &ev);
        pokemon.df = calculaAtributo(bs, iv, ev, pokemon.nivel);
        scanf("%d %d %d", &bs, &iv, &ev);
        pokemon.sp = calculaAtributo(bs, iv, ev, pokemon.nivel);

        printf("Caso #%d: %s nivel %d\n", teste, pokemon.nome, pokemon.nivel);
        printf("HP: %d\n", pokemon.hp);
        printf("AT: %d\n", pokemon.at);
        printf("DF: %d\n", pokemon.df);
        printf("SP: %d\n", pokemon.sp);
    }

    return 0;
}