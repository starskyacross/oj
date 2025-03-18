#include <stdio.h>
#include <math.h>

int  acd(int(a)) {
	int b = 0, c;
	while (a != 1) {
		if (a % 2 == 0) {
			a = a / 2;
		} else {
			a = ((3 * a + 1) / 2);
		}
		b = b + 1;
	}
	return b;
}

int main() {
	int d;
	while (scanf("%d", &d) != EOF) {
		printf("%d\n", acd(d));
	}
	return 0;
}

