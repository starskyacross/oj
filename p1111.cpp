#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e = 0, f, g = 0, h = 0, k = 0, i, l = 0, m;
	int den[1000];
	int kai[1000];
	while (scanf("%d%d", &a, &c) != EOF) {
		for (i = 0; i < a; i++) {
			b = i + 1;
			den[i] = b;
		}
		for (g = 0; g < a; g++) {
			for (d = 2; d <= c; d++) {
				if (den[g] % d != 0)
					h = 0;
				else {
					k = 1;
					l = 1 + l;
				}
			}
			if (h + k == 0 || l % 2 == 0) {
				kai[e] = den[g];
				e = e + 1;
			}
			h = 0;
			k = 0;
			l = 0;
		}
		for (f = 0; f < e; f++) {
			printf("%d\n", kai[f]);
		}
		e = 0;
	}
	return 0;

}