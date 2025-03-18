#include <stdio.h>

int main() {
	int i, n, m, j, k;
	scanf("%d", &k);
	while (k--) {
		scanf("%d", &n);
		for (i = 1; n - i > 0; i++)
			n = n - i;
		if (n % 9 == 0)
			printf("%d\n", 9);
		else
			printf("%d\n", n % 9);
	}
	return 0;
}