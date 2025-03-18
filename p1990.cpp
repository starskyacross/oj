#include <stdio.h>

int main() {
	int n, m, N, i, j, k, l;
	int a[101][2], b[101][2];
	scanf("%d %d", &n, &m);
	l = 0;
	k = 0;
	getchar();
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		scanf("%d %d %d %d", &a[i][1], &a[i][2], &b[i][1], &b[i][2]);
	}
	for (i = 1; i <= N; i++) {
		if ((a[i][1] + b[i][1]) == a[i][2] && (a[i][1] + b[i][1]) != b[i][2]) {
			l = l + 1;
			if (l>n) {
				printf("A\n");
				printf("%d\n", k);
				break;
			}
		}
		if ((a[i][1] + b[i][1]) == b[i][2] && (a[i][1] + b[i][1]) != a[i][2]) {
			k = k + 1;
			if (k > m) {
				printf("B\n");
				printf("%d\n", l);
				break;
			}
		}
		}
	
	return 0;
}