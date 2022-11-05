//PROBLEM 2433
//link = https://www.beecrowd.com.br/judge/pt/problems/view/2433
#include <stdio.h>

//DEFINICOES
#define MAX 100000

//FUNCOES
void merge(long* vetor, long inicio, long meio, long fim) {
    long tamanho_lado_esquerdo = meio - inicio + 1,
         tamanho_lado_direito = fim - meio;
    
    long lado_esquerdo[tamanho_lado_esquerdo],
         lado_direito[tamanho_lado_direito];
    
    long i, j, k;

    for (i = 0; i < tamanho_lado_esquerdo; i++)
        lado_esquerdo[i] = vetor[inicio + i];
    for (j = 0; j < tamanho_lado_direito; j++)
        lado_direito[j] = vetor[meio + j + 1];

    i = 0, j = 0, k = inicio;

    while ((i < tamanho_lado_esquerdo) && (j < tamanho_lado_direito)) {
        if (lado_esquerdo[i] <= lado_direito[j])
            vetor[k++] = lado_esquerdo[i++];
        else
            vetor[k++] = lado_direito[j++];
    }

    while (i < tamanho_lado_esquerdo)
        vetor[k++] = lado_esquerdo[i++];
    
    while (j < tamanho_lado_direito)
        vetor[k++] = lado_direito[j++];
}

void mergeSort(long* vetor, long inicio, long fim) {
    if (inicio < fim) {
        long meio = inicio + (fim - inicio)/2;

        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}

void calcularDistancias(long* predios, long* distancias, long qtd_predios) {
    long i;
    qtd_predios--;

    for (i = 0; i < qtd_predios; i++)
        distancias[i] = predios[i + 1] - predios[i];
}

long menorDistancia(long* distancias, long qtd_distancias, long tamanho_intervalo) {
    long i, j;
    long menor_distancia = 0, soma_distancia;

    for (i = 0; i < tamanho_intervalo; i++)
        menor_distancia += distancias[i];
    soma_distancia = menor_distancia;

    j = i;
    i = 0;
    while (j < qtd_distancias) {
        soma_distancia -= distancias[i++];
        soma_distancia += distancias[j++];

        if (soma_distancia < menor_distancia)
            menor_distancia = soma_distancia;
    }

    return menor_distancia;
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    long predios[MAX],
         distancias[MAX];
    
    long qtd_predios, qtd_vendidos;

    long i;

    //leitura
    scanf("%ld %ld", &qtd_predios, &qtd_vendidos);

    for (i = 0; i < qtd_predios; i++)
        scanf("%ld", &predios[i]);
    
    //processamento - saida
    mergeSort(predios, 0, qtd_predios - 1);
    calcularDistancias(predios, distancias, qtd_predios);
    
    printf("%ld\n", menorDistancia(distancias, qtd_predios - 1, (qtd_predios - qtd_vendidos - 1))); //(qtd_predios - qtd_vendidos - 1) intervalo das distancias

    return 0;
}