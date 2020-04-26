//PROBLEM 1124
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1124
//Obs.: Consegui atraves da bela explicacao dada nesse link = https://www.urionlinejudge.com.br/judge/pt/questions/view/1124/6285
#include <stdio.h>
#include <math.h>

//FUNCAO QUE RETORNA SE EH POSSIVEL OU NAO
int possoLevarCilindros(int largura, int comprimento, int raio1, int raio2) {
    //verifica se tem algum circulo com dimensoes maiores dos que as permitidas no retangulo (elevador)
    int diametro1 = 2 * raio1, diametro2 = 2 * raio2;
    
    if ((diametro1 > largura) || (diametro1 > comprimento)) {
        return 0;
    }
    if ((diametro2 > largura) || (diametro2 > comprimento)) {
        return 0;
    }

    //verifica se eh possivel posicionar os cilindros na vertical ou na horizontal
    int tmp = diametro1 + diametro2;
    if ((tmp <= largura) || (tmp <= comprimento)) {
        return 1;
    }

    //verifca se eh possivel posicionar na diagonal
    int ponto1_x = raio1, ponto1_y = raio1;
    int ponto2_x = comprimento - raio2, ponto2_y = largura - raio2;

    int tmp1 = (ponto2_x - ponto1_x);
    int tmp2 = (ponto2_y - ponto1_y);

    double distancia_entre_centros = sqrt((tmp1*tmp1) + (tmp2*tmp2));
    
    if (distancia_entre_centros >= (raio1 + raio2)) {
        return 1;
    }

    return 0;
}

//PROGRAMA PRINCIPAL
int main() {
    int largura = 0, comprimento = 0, raio1 = 0, raio2 = 0;
    
    while (1) {
        scanf("%d %d %d %d", &largura, &comprimento, &raio1, &raio2);
        if ((largura == 0) && (comprimento == 0) && (raio1 == 0) && (raio2 == 0)) {
            break;
        }

        if (possoLevarCilindros(largura, comprimento, raio1, raio2)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }
    

    return 0;
}