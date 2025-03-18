#include <stdio.h>
int shu(int n);

int main() {
	int n, i;
	while (scanf("%d", &n) != EOF) {
		i = shu(n);
		printf("%d\n", i);
	}
	return 0;
}

int shu(int n) {
	int i = 0, m = 0, j = 0;
	if (n < 2)
		return 1;
	else
		return shu(n - 1) + shu(n - 2);
}