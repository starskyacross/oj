#include <stdio.h>

int main() {
	int l, m, i, n, shi, zhong, shu;

	while (scanf("%d %d", &l, &m) != EOF) {
		int geshu = 0;
		int a[100001] = {0};
		for (i = 0; i <= l; i++) {
			a[i] = 1;
		}
		for (i = 1; i <= m; i++) {
			scanf("%d %d", &shi, &zhong);
			for (shu = shi; shu <= zhong; shu++) {
				if (a[shu] == 1)
					a[shu] = 0;
			}
		}
		for (i = 0; i <= l; i++) {
			if (a[i] == 1)
				geshu = geshu + 1;
		}
		printf("%d\n", geshu);
	}
	return 0;
}