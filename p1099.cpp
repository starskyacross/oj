#include <stdio.h>

int main() {
	int a, b, c, d, f, max, min, i, j, h, k;
	int e[4];
	while (scanf("%d", &a) != EOF) {
		b = 0;
		if (a == 6174)
			printf("0\n");
		else {

			while (a != 6174) {
				h = a;
				for (i = 0; i <= 3; i++) {
					e[i] = h % 10;
					h = h / 10;
				}
				for (i = 0; i < 3; i++) {
					for (c = 3; c > i ; c--) {
						if (e[c] > e[c - 1]) {
							k = e[c];
							e[c] = e[c - 1];
							e[c - 1] = k;
						}

					}
				}
				max = e[0] * 1000 + e[1] * 100 + e[2] * 10 + e[3];
				min = e[3] * 1000 + e[2] * 100 + e[1] * 10 + e[0];
				a = max - min;
				b = b + 1;
			}
			printf("%d\n", b);
		}
	}
	return 0;
}