#include <stdio.h>

int main() {
	int a, b, c, d, f = 0, g;
	int e[1000] = {0};
	while (scanf("%d", &a) != EOF) {
		for (b = 0; b < a; b++) {
			scanf("%d", &g);
			e[b] = g;
		}
		for (c = 0; c < a; c++) {
			for (d = c; d < a; d++) {
				if (e[c] == -e[d])
					f = f + 1;
			}
		}
		printf("%d\n", f);
		f = 0;
	}
	return 0;
}