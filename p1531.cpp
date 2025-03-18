#include <stdio.h>
#include <string.h>

int main() {
	int n, i, j;
	char a[10][101] = {0}, b[101] = {0};
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++) {
		gets(a[i]);
	}
	for (i = 1; i < n; i++) {
		for (j = 1; j < n - i; j++) {
			if (strcmp(a[j], a[j + 1]) > 0) {
				strcpy(b, a[j]);
				strcpy(a[j], a[j + 1]);
				strcpy(a[j + 1], b);
			}
		}
	}
	for (i = 0; i < n; i++) {
		puts(a[i]);
	}
	return 0;
}