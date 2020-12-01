//PROBLEM 2873
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2873
#include <stdio.h>

int main() {
    double a = 0.0, b = 0.0, c = 0.0, d = 0.0, x = 0.0;
    
    while (1) {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

        if ((a == 0) && (b == 0) && (c == 0) && (d == 0)) {
            break;
        }

        x = (c*(a + 2*b))/(2*d);

        printf("%.5lf\n", x);
    }

    return 0;
}