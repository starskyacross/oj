#include <stdio.h>

int gongyueshu(int a, int b) {
	while (a != b) {
		if (a > b)
			a = a - b;
		if (b > a)
			b = b - a;
	}
	return a;
}

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int a, b, c, d, e;
		scanf("%d %d %d", &a, &b, &c);
		d = gongyueshu(a, b);
		e = gongyueshu(d, c);
		printf("%d\n", e);
	}
	return 0;
}