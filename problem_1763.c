//PROBLEM 1763
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1763
#include <stdio.h>
#include <string.h>

#define MAX 100

//PAISES
#define BRASIL "brasil"
#define PORTUGAL "portugal"
#define ALEMANHA "alemanha"
#define AUSTRIA "austria"             
#define COREIA "coreia"
#define GRECIA "grecia"
#define ESTADOS_UNIDOS "estados-unidos"      
#define INGLATERRA "inglaterra"          
#define AUSTRALIA "australia"           
#define ANTARDIDA "antardida"           
#define CANADA "canada"
#define SUECIA "suecia"
#define TURQUIA "turquia"
#define ARGENTINA "argentina"
#define CHILE "chile"
#define MEXICO "mexico"
#define ESPANHA "espanha"
#define IRLANDA "irlanda"
#define BELGICA "belgica"
#define ITALIA "italia"
#define LIBIA "libia"
#define SIRIA "siria"
#define MARROCOS "marrocos"
#define JAPAO "japao"

//QUE IMPRIME A MENSAGEM DE ACORDO COM O PAIS
void mensagem(char pais[MAX]) {
    if (strcmp(pais,JAPAO) == 0) {
        printf("Merii Kurisumasu!\n");
        return;
    }
    if ((strcmp(pais,SIRIA) == 0) || (strcmp(pais,MARROCOS) == 0)) {
        printf("Milad Mubarak!\n");
        return;
    }
    if ((strcmp(pais,ITALIA) == 0) || (strcmp(pais,LIBIA) == 0)) {
        printf("Buon Natale!\n");
        return;
    }
    if (strcmp(pais,BELGICA) == 0) {
        printf("Zalig Kerstfeest!\n");
        return;
    }
    if (strcmp(pais,IRLANDA) == 0) {
        printf("Nollaig Shona Dhuit!\n");
        return;
    }
    if ((strcmp(pais,ARGENTINA) == 0) || (strcmp(pais,CHILE) == 0) || (strcmp(pais,MEXICO) == 0) || (strcmp(pais,ESPANHA) == 0)) {
        printf("Feliz Navidad!\n");
        return;
    }
    if (strcmp(pais,TURQUIA) == 0) {
        printf("Mutlu Noeller\n");
        return;
    }
    if (strcmp(pais,SUECIA) == 0) {
        printf("God Jul!\n");
        return;
    }
    if ((strcmp(pais,BRASIL) == 0) || (strcmp(pais,PORTUGAL) == 0)) {
        printf("Feliz Natal!\n");
        return;
    }
    if (strcmp(pais,ALEMANHA) == 0) {
        printf("Frohliche Weihnachten!\n");
        return;
    }
    if (strcmp(pais,AUSTRIA) == 0) {
        printf("Frohe Weihnacht!\n");
        return;
    }
    if (strcmp(pais,COREIA) == 0) {
        printf("Chuk Sung Tan!\n");
        return;
    }
    if (strcmp(pais,GRECIA) == 0) {
        printf("Kala Christougena!\n");
        return;
    }
    if ((strcmp(pais,ESTADOS_UNIDOS) == 0) || (strcmp(pais,INGLATERRA) == 0) || (strcmp(pais,AUSTRALIA) == 0) || (strcmp(pais,ANTARDIDA) == 0) || (strcmp(pais,CANADA) == 0)) {
        printf("Merry Christmas!\n");
        return;
    }

    printf("--- NOT FOUND ---\n");
}

//PROGRAMA PRINCIPAL
int main() {
    char pais[100];

    while (scanf("%s", pais) != EOF) {
        mensagem(pais);
    }

    return 0;
}