#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int vod(int(f)) {
	double a, c = 1, d = 0;
	for (a = 1; a <= f; a++) {
		c = c * a;
		d = d + c;
	}
	d = d + 1;
	return d;
}

int main() {
	int g;
	while (scanf("%d", &g) != EOF) {
		if (g == 0)
			printf("1\n");
		else
			printf("%d\n", vod(g));
	}
	return 0;
}









