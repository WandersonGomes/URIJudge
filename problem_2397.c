//PROBLEM 2397
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2397
#include <stdio.h>

//FUNCAO QUE INFORMA SE PODE FORMAR TRIANGULO
int formaTriangulo (int a, int b, int c) {
	if ((a+b) > c) {
		if ((a+c) > b) {
			if ((b+c) > a) {
				return 1;
			}
		}
	}
	return 0;
}

//INFORMA SE O TRIANGULO EH RETANGULO (= 90)
int ehRetangulo(int a, int b, int c) {
	if (((a*a) + (b*b)) == (c*c)) {
		return 1;
	}
	if (((a*a) + (c*c)) == (b*b)) {
		return 1;
	}
	if (((c*c) + (b*b)) == (a*a)) {
		return 1;
	}
	return 0;
}

//FUNCAO QUE INFORMA SE O TRIANGULO EH OBSTUSANGULO (> 90)
int ehObtusangulo(int a, int b, int c) {
	if ((a*a) > ((b*b) + (c*c))) {
		return 1;
	}
	if ((b*b) > ((a*a) + (c*c))) {
		return 1;
	}
	if ((c*c) > ((b*b) + (a*a))) {
		return 1;
	}
	return 0;
}

//Obs.: A funcao nao eh utilizada na resolucao, porem fica como anotacao
//FUNCAO QUE INFORMA SE O TRIANGULO EH ACUTANGULO (< 90)
int ehObtusangulo(int a, int b, int c) {
	if ((a*a) < ((b*b) + (c*c))) {
		return 1;
	}
	if ((b*b) < ((a*a) + (c*c))) {
		return 1;
	}
	if ((c*c) < ((b*b) + (a*a))) {
		return 1;
	}
	return 0;
}


//PROGRAMA PRINCIPAL
int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);

	if (formaTriangulo(a,b,c)) {
		if (ehRetangulo(a,b,c)) {
			printf("r\n");
		} else if (ehObtusangulo(a, b, c)) {
			printf("o\n");
		} else {
			printf("a\n");
		}
	} else {
		printf("n\n");
	}

	return 0;
}