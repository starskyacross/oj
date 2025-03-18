#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e = 0, f, g = 0, h = 0, k = 0, i, l = 0, m;
	int piao[1001] = {0};
	while (scanf("%d", &a) != EOF && a != -1) {
		if (a > 0 && a < 1001)
			piao[a - 1] = piao[a - 1] + 1;
	}
	for (i = 0; i < 1001; i++) {
		if (piao[i] != 0)
			printf("%d %d\n", i + 1, piao[i]);
	}
	return 0;
}