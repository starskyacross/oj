#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	char a[100] = {0};
	int b, c, d;
	while (scanf("%s", a) != EOF) {
		int len = strlen(a);
		if (a[0] == '-') {
			printf("-");
			for (c = len - 1; c > 0; c--) {
				if (a[c] == '0')
					continue;
				else
					break;
			}
			for (; c > 0; c--) {
				printf("%d", a[c] - '0');
			}
			printf("\n");

		} else {
			for (c = len - 1; c > 0; c--) {
				if (a[c] == '0')
					continue;
				else
					break;
			}
			for (; c >= 0; c--) {
				printf("%d", a[c] - '0');
			}
			printf("\n");
		}
	}
	return 0;
}