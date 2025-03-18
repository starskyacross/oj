#include <stdio.h>

int main() {
	int shu, i, j, n, m, max1, max2, x, y, max;
	int a[55][55] = {0};
	scanf("%d", &n);
	scanf("%d", &m);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	max1 = max2 = x = y = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			x = x + a[i][j];
			y = y + a[i][j];
			for (shu = 1; shu <= m; shu++) {
				if (i - shu >= 0) {
					x = x + a[i - shu][j];
				}
				if (j - shu >= 0) {

					x = x + a[i][j - shu];
				}
				if (i + shu < n) {

					x = x + a[i + shu][j];
				}
				if (j + shu < n) {

					x = x + a[i][j + shu];
				}
			}
			if (x > max1)
				max1 = x;
			for (shu = 1; shu <= m; shu++) {

				if (i - shu >= 0 && j - shu >= 0) {

					y = y + a[i - shu][j - shu];
				}
				if (i - shu >= 0 && j + shu < n) {

					y = y + a[i - shu][j + shu];
				}
				if (i + shu < n && j - shu >= 0) {

					y = y + a[i + shu][j - shu];

				}
				if (i + shu < n && j + shu < n) {

					y = y + a[i + shu][j + shu];
				}
			}
			if (y >= max2)
				max2 = y;
			x = y = 0;
		}
	if (max1 >= max2)
		printf("%d\n", max1);
	else
		printf("%d\n", max2);
	return 0;
}
