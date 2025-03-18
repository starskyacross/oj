#include <stdio.h>

int main() {
	int mao[101], bao[11][101];
	int i, n, k, l, j, m;
	scanf("%d", &n);
	getchar();
	for (i = 1; i <= n; i++) {
		scanf("%d", &mao[i]);
	}
	getchar();
	scanf("%d", &k);
	getchar();
	for (i = 1; i <= k; i++)
		for (j = 1; j <= n; j++) {
			scanf("%d", &bao[i][j]);
		}

	for (i = 1; i <= k; i++) {
		int p = 1;
		for (j = 1; j <= n; j++) {
			if (bao[i][j] == 0) {
				p = p + 1;
			}
			if (bao[i][j] != mao[j] && bao[i][j] != 0) {
				printf("Ai Ya\n");
				break;
			}
			if (p == n) {
				printf("Ai Ya\n");
				break;
			}
			if (j == n && p != n)
				printf("Da Jiang!!!\n");

		}
	}
	return 0;
}
