#include <stdio.h>
#include <string.h>

int main() {
	int a, b, c, CHN;
	scanf("%d", &a);
	getchar();
	char d[50][50] = {0};
	char f[50] = {0};
	for (b = 0; b < a; b++) {
		gets(d[b]);
		if (strcmp(d[b], "China") == 0)
			CHN = b;
	}
	strcpy(f, d[CHN]);
	strcpy(d[CHN], d[a - 1]);
	strcpy(d[a - 1], f);
	for (c = 0; c < a - 1; c++)
		for (b = 0; b < a - 2 - c; b++) {
			int k = strcmp(d[b], d[b + 1]);
			if (k > 0) {
				strcpy(f, d[b]);
				strcpy(d[b], d[b + 1]);
				strcpy(d[b + 1], f);
			}
		}
	for (b = 0; b < a; b++) {
		puts(d[b]);
	}
	return 0;
}