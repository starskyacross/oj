#include <stdio.h>
#include <string.h>
#define N 101

int main() {
	int n, m, i, j, k;
	int r[N][N] = {0};
	int g[N][N] = {0};
	int b[N][N] = {0};
	int grey[N][N] = {0};
	scanf("%d %d", &n, &m);
	k = 1;
	while (n != 0 || m != 0) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				scanf("%d", &r[i][j]);
			}
		}
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				scanf("%d", &g[i][j]);
			}
		}
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				scanf("%d", &b[i][j]);
			}
		}
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				grey[i][j] = (r[i][j] + g[i][j] + b[i][j]) / 3;
			}
		}
		printf("Case %d:\n", k);
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if (j < m - 1)
					printf("%d,", grey[i][j]);
				else
					printf("%d\n", grey[i][j]);
			}
		}
		scanf("%d %d", &n, &m);
		k = k + 1;
	}
	return 0;

}