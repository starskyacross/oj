#include <stdio.h>

int main() {
	int i, j, k, l, n, m, a, b, c, min, max;
	int wei[10001], dis[10001];
	scanf("%d", &i);
	while (i--) {
		min = 0;
		max = 0;
		scanf("%d %d", &l, &n);
		wei[10001] = 0;
		for (a = 0; a < n; a++) {
			scanf("%d", &wei[a]);
		}
		dis[10001] = 0;
		for (a = 0; a < n; a++) {
			if (wei[a] >= (l / 2)) {
				dis[a] = l - wei[a];
			} else
				dis[a] = wei[a];
			if (dis[a] > min)
				min = dis[a];
		}
		dis[10001] = 0;
		for (a = 0; a < n; a++) {
			if (wei[a] >= (l / 2)) {
				dis[a] = wei[a];
			} else
				dis[a] = l - wei[a];
			if (dis[a] > max)
				max = dis[a];
		}
		printf("%d %d\n", min, max);
	}
	return 0;
}