#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e, f, L, M;
	int g = 0, h = 0;
	int quan[100000] = {0};
	while (scanf("%d%d", &L, &M) != EOF) {
		for (a = 1; a <= M; a++) {
			scanf("%d%d", &b, &c);
			for (e = b; e <= c; e++) {
				quan[e] = 1;
			}
		}
		for (f = 0; f <= L; f++) {
			h = quan[f];
			if (h == 0) {
				g = g + 1;
			}
			h = 0;
		}
		printf("%d\n", g);
		g = 0;
		h = 0;
	}
	return 0;
}