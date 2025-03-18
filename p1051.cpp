#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fan(int a) {
	int b = 1, c = 0, d, e, f;
	f = a;
	while (f != 0) {
		b = f % 10;
		c = b + c * 10;
		f = f / 10;
	}
	return c;
}

int main() {
	int b, c, d, e, f, g, h, i;
	scanf("%d", &b);
	for (c = 1; c <= b; c++) {
		scanf("%d", &d);
		for (e = 2; e < d; e++) {
			if (d % e == 0) {
				f = 1;
				break;
			} else
				f = 0;
		}
		for (g = 2; g < fan(d); g++) {
			if (fan(d) % g == 0) {
				h = 1;
				break;
			} else
				h = 0;
		}
		if (h + f == 0)
			printf("1\n");
		else
			printf("0\n");
	}

	return 0;
}

