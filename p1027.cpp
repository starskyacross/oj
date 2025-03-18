#include <stdio.h>

int main() {
	int a, b, c, d, e, i, f;
	while (scanf("%d", &a) != EOF) {
		b = a ;
		while (b++) {
			c = 0;
			f = 1;
			for (i = 0; i < a; i++) {
				c = (c + b - 1) % (2 * a - i);
				if (c < a) {
					f = 0;
					break;
				}
			}
			if (f == 1) {
				printf("%d\n", b);
				break;
			}
		}
	}

	return 0;
}