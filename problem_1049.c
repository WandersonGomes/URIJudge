//PROBLEM 1049
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1049
#include <stdio.h>
#include <string.h>

//DEFINICOES
#define MAX 30

//PROGRAMA PRINCIPAL
int main() {
    //dados
    char palavra1[MAX],
         palavra2[MAX],
         palavra3[MAX];

    char animal[MAX];

    //leitura
    scanf("%s", palavra1);
    scanf("%s", palavra2);
    scanf("%s", palavra3);

    //processamento
    if (!strcmp(palavra1, "vertebrado")) {
        if (!strcmp(palavra2, "ave")) {
            if (!strcmp(palavra3, "carnivoro"))
                strcpy(animal, "aguia");
            else
                strcpy(animal, "pomba");
        } else {
            if (!strcmp(palavra3, "onivoro"))
                strcpy(animal, "homem");
            else
                strcpy(animal, "vaca");
        }
    } else {
        if (!strcmp(palavra2, "inseto")) {
            if (!strcmp(palavra3, "hematofago"))
                strcpy(animal, "pulga");
            else
                strcpy(animal, "lagarta");
        } else {
            if (!strcmp(palavra3, "hematofago"))
                strcpy(animal, "sanguessuga");
            else
                strcpy(animal, "minhoca");
        }
    }

    //saida
    puts(animal);

    return 0;
}