#include <stdio.h>

int main() {
	int n;
	while (~scanf("%d", &n)) {
		int rsl[500] = {0}, temp = 0, cnt = 1, j = 0, i = 0;
		rsl[0] = 1;
		for (i = 0; i < n; i++) {
			temp = 0;
			for (j = 0; j < cnt; j++) {
				temp = rsl[j] * 2 + temp;
				rsl[j] = temp % 10;
				temp /= 10;
			}
			if (j <= 499) {
				while (temp) {
					cnt++;
					rsl[j++] = temp % 10;
					temp /= 10;
				}
			}
		}
		for (i = 499; i >= 1; i--) {
			printf("%d", rsl[i]);
		}
		printf("%d", rsl[0] - 1);
		printf("\n");
	}
	return 0;
}







/*#include <stdio.h>(自己写的不知道错哪)

int main() {
	int n;
	while (~scanf("%d", &n)) {
		int a[500] = {0};
		a[0] = 1;
		int weishu = 1, temp = 0, j = 0, i = 0;
		for (i = 0; i < n; i++) {
			temp = 0;
			for (j = 0; j < weishu; j++) {
				temp = a[j] * 2 + temp;
				a[j] = temp % 10;
				temp /= 10;
			}
			if (i <= 499) {
				while (temp) {
					weishu++;
					a[j++] = temp % 10;
					temp /=  10;
				}
			}
		}
		for (i = 499; i >= 1; i--) {
			printf("%d", a[i]);
		}
		printf("%d\n", a[0] - 1);
	}
	return 0;
}
*/