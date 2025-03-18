#include <stdio.h>

int main() {
	int a, b, c, d = 0, e;
	double f = 1, g;
	scanf("%d", &a);
	for (e = 0; e < a; e++) {
		f = 1;
		d = 0;
		scanf("%d", &c);
		for (b = 1; b <= c; b++) {
			f = b * f;
		}
		while (f > 1) {
			f = f / 10;
			d = d + 1;
		}
		printf("%d\n", d);
	}
	return 0;
}