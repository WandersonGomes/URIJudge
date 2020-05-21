//PROBLEM 1512
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1512
#include <stdio.h>

//FUNCAO QUE CALCULA O MDC
long long int mdc(long long int a, long long int b) {
	if (b == 0) {
		return a;
	} else {
		return mdc(b, a%b);
	}
}

//FUNCAO QUE CALCULA O MMC
long long int mmc(long long int a, long long int b) {
	return (a*b)/mdc(a,b);
}


//PROGRAMA PRINCIPAL
int main() {
	long long int numero_azulejos = 0, numero_a = 0, numero_b = 0;
	long long int numero_multiplos_a = 0, numero_multiplos_b = 0, numero_multiplos_a_b = 0;
	long long int an = 0, mmc_a_b = 0;

	while (1) {
		scanf("%lld %lld %lld", &numero_azulejos, &numero_a, &numero_b);
		if ((numero_azulejos == 0) && (numero_a == 0) && (numero_b == 0)) {
			break;
		}

		if (numero_azulejos%numero_a == 0) {
			an = numero_azulejos;
		} else {
			an = numero_azulejos - (numero_azulejos%numero_a);
		}
		numero_multiplos_a = an/numero_a;

		if (numero_azulejos%numero_b == 0) {
			an = numero_azulejos;
		} else {
			an = numero_azulejos - (numero_azulejos%numero_b);
		}
		numero_multiplos_b = an/numero_b;

		mmc_a_b = mmc(numero_a,numero_b);
		if (numero_azulejos%mmc_a_b) {
			an = numero_azulejos;
		} else {
			an = numero_azulejos - (numero_azulejos%mmc_a_b);
		}
		numero_multiplos_a_b = an/mmc_a_b;

		printf("%lld\n", (numero_multiplos_a + numero_multiplos_b - numero_multiplos_a_b));
	}

	return 0;
}