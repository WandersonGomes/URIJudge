//PROBLEM 1618
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1618
#include <stdio.h>

//FUNCAO QUE INFORMA SE HOUVE COLISAO
int colisao(int ax, int ay, int cx, int cy, int rx, int ry) {
	if (rx >= ax && rx <= cx) {
		if (ry <= cy && ry >= ay) {
			return 1;
		}
	}
	return 0;
}

//PROGRAMA PRINCIPAL
int main() {
	int quantidade_testes = 0;
	int i = 0;
	int ax = 0, ay = 0, cx = 0, cy = 0, rx = 0, ry = 0;

	scanf("%d", &quantidade_testes);
	for (i = 0; i < quantidade_testes; i++) {
		//A B C D
		scanf("%d %d %*d %*d %d %d %*d %*d %d %d", &ax, &ay, &cx, &cy, &rx, &ry);
	
		printf("%d\n", colisao(ax,ay,cx,cy,rx,ry));
	}

	return 0;
}