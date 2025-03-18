#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e = 0, f, g = 0, h = 0, k = 0, i, l = 0, m;
	int shu1[100];
	int shu2[100];
	int shu3[100];
	while (scanf("%d", &a) != EOF) {
		for (b = 0; b < a; b++)
			scanf("%d", &shu1[b]);
		for (c = 0; c < a; c++)
			scanf("%d", &shu2[c]);
		for (d = 0; d < a; d++) {
			shu3[d] = shu1[d] + shu2[d];
		}
		for (e = 0; e < a; e++) {
			if (e < a - 1)
				printf("%d ", shu3[e]);
			else
				printf("%d\n", shu3[e]);
		}
	}
	return 0;
}