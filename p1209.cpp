#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e, f = 0, g, h;
	while (scanf("%d", &a) != EOF) {
		for (b = a - 2; b > 0; b--) {
			for (c = 2; c < b; c++) {
				if (b % c == 0 || (b + 2) % c == 0)
					f = 1;
				else
					f = 0 + f;
			}
			if (f == 0) {
				d = b + 2;
				printf("%d %d\n", b, d);
				break;
			}
			f = 0;
		}
		f = 0;
	}
	return 0;
}
