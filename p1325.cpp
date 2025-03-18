#include <stdio.h>

int main() {
	int n, m, i, j, k;
	int a[101][2];
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < n; i++) {
			scanf("%d %d", &a[i][0], &a[i][1]);
		}
		for (i = 1; i < n; i++) {
			for (j = 0; j < n - i; j++) {
				if (a[j][0] > a[j + 1][0]) {

					k = a[j][0];
					m = a[j][1];
					a[j][0] = a[j + 1][0];
					a[j][1] = a[j + 1][1];
					a[j + 1][0] = k;
					a[j + 1][1] = m;
				}
			}
		}
		j = 0;
		for ( i = 1 ; i < n; i++) {
			if (a[j][1] >= a[i][0]) {
				a[i][0] = -1;
				if (a[j][1] <= a[i][1]) {
					a[j][1] = a[i][1];
				}
			} else {
				j = i ;
			}

		}
		for (i = 0; i < n; i++) {
			if (a[i][0] != -1) {
				printf("%d %d\n", a[i][0], a[i][1]);
			}
		}
		printf("\n");
	}
	return 0;
}