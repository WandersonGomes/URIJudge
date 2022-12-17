//PROBLEM 1040
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1040
#include <stdio.h>

//DEFINICOES
#define PESO_NOTA_1 2
#define PESO_NOTA_2 3
#define PESO_NOTA_3 4
#define PESO_NOTA_4 1

//PROGRAMA PRINCIPAL
int main() {
    //dados
    float nota1, nota2, nota3, nota4;
    float nota_exame;
    float media_ponderada;
    float media_final;

    //leitura
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    //processamento - saida
    media_ponderada = (nota1 * PESO_NOTA_1 + nota2 * PESO_NOTA_2 + nota3 * PESO_NOTA_3 + nota4 * PESO_NOTA_4)/
            (PESO_NOTA_1 + PESO_NOTA_2 + PESO_NOTA_3 + PESO_NOTA_4);

    printf("Media: %.1f\n", media_ponderada);

    if (media_ponderada >= 7.0)
        puts("Aluno aprovado.");
    else if (media_ponderada < 5.0)
        puts("Aluno reprovado.");
    else {
        puts("Aluno em exame.");
        scanf("%f", &nota_exame);

        printf("Nota do exame: %.1f\n", nota_exame);

        media_final = (media_ponderada + nota_exame)/2.0;

        if (media_final >= 5.0)
            puts("Aluno aprovado.");
        else
            puts("Auno reprovado.");
        
        printf("Media final: %.1f\n", media_final);
    }

    return 0;
}