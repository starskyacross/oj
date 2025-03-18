#include <stdio.h>

int main() {
	double n, l, m, k, j;
	float a, b, c;
	scanf("%lf %lf", &n, &l);
	a = n * 1.0 / (l * l);
	if (a > 25) {
		printf("%.1lf\n", a);
		printf("PANG\n");
	} else {
		printf("%.1lf\n", a);
		printf("Hai Xing\n");
	}
	return 0;
}