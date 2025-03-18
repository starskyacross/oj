#include <stdio.h>
#include <math.h>

int main() {
	int i, j, k, n, m, shu;
	scanf("%d", &n);
	m = 2;
	shu = 0;
	for (i = 1; i < n; i++) {
		int p = 1;
		m = m * 2;
		k = m - 1;
		for (j = 2; j <= k / 2; j++) {
			if (k % j == 0) {
				p = 0;
			}
		}
		if (p == 1)
			printf("%d\n", k);
		shu = shu + 1;
	}
	if (shu == 0)
		printf("None\n");
	return 0;
}