#include <stdio.h>
int fun(int a, int b, int c);

int main() {
	int n, a, b, he, i;
	scanf("%d", &n);
	while (n--) {
		he = 0;
		scanf("%d %d", &a, &b);
		for (i = 1; i <= a; i++) {
			he = (he + fun(i, b, 10000)) % 10000;
		}
		printf("%d\n", he);
	}
	return 0;
}

int fun(int a, int b, int c) {
	int i = 1;
	while (b > 0) {
		if (b % 2 == 1)
			i = (i * a) % c;
		b = b / 2;
		a = (a * a) % c;
	}
	return i;
}