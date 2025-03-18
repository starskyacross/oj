#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a, b = 0, c;
	for (a = 100; a <= 200; a++) {
		b = b + 1;
		if (a % 3 != 0) {
			printf("%6d", a);
		}
		if (b % 9 == 0) {
			printf("\n");
		}
	}
	return 0;
}