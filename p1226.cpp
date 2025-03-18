#include <stdio.h>
#include <string.h>

int main() {
	int n, i, j, m, k;
	char shu[101][21], a[21];
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < n; i++) {
			scanf("%s", shu[i]);
		}
		for (i = 0; i < n - 1; i++) {
			for (j = 0; j < n - 1 - i; j++) {
				if (strcmp(shu[j], shu[j + 1]) < 0) {
					strcpy(a, shu[j]);
					strcpy(shu[j], shu[j + 1]);
					strcpy(shu[j + 1], a);
				}
			}
		}
		for (i = 0; i < n; i++) {
			printf("%s", shu[i]);
		}
		printf("\n");
	}
	return 0;
}