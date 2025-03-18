#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a, b, c = 0, d = 0, e, T, min = 1000, max = 0;
	double f;
	scanf("%d", &T);
	for (b = 1; b <= T; b++) {
		scanf("%d", &a);
		while (a != -1) {

			if (a > max) {
				max = a;
			}

			if (a < min) {
				min = a;
			}
			d = d + 1;
			c = c + a;
			scanf("%d", &a);
		}
		f = c / (d * 1.0);
		printf("%d\n%d\n%d\n%.1lf\n", d, max, min, f);
		a = 0;
		d = 0;
		c = 0;
		f = 0;
	}
	return 0;
}