#include <math.h>
#include <stdio.h>

int main() {
	int a, b, c = 1, d = 1, e, f;
	while (scanf("%d", &a) != EOF) {
		for (b = 1; b <= a; b++) {
			e = c + d;
			c = d;
			d = e;
		}
		if (a % 2 == 0)
			printf("-%d/%d\n", e, c);
		else
			printf("%d/%d\n", e, c);
		c = 1;
		d = 1;
	}

	return 0;
}