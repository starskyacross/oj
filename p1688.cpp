#include <stdio.h>

int main() {
	int t, a, b, c, d, e, min, max;
	int s, shu;
	int i, k, j, l, m, n, v;
	scanf("%d", &t);
	while (t--) {
		shu = 0, s = 0;
		int ap[10], bp[10], cp[10], dp[10], ep[10];
		getchar();
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		for (i = 0; i < a; i++)
			scanf("%d", &ap[i]);
		for (i = 0; i < b; i++)
			scanf("%d", &bp[i]);
		for (i = 0; i < c; i++)
			scanf("%d", &cp[i]);
		for (i = 0; i < d; i++)
			scanf("%d", &dp[i]);
		for (i = 0; i < e; i++)
			scanf("%d", &ep[i]);
		scanf("%d %d", &min, &max);
		dp[d] = 0;
		ep[e] = 0;
		for (i = 0; i < d; i++)
			for (j = i + 1; j <= d; j++)
				for (k = 0; k < e; k++)
					for (l = k + 1; l <= e; l++) {
						s = dp[i] + dp[j] + ep[k] + ep[l];
						for (m = 0; m < a; m++)
							for (n = 0; n < b; n++) {
								s = s + ap[m] + bp[n];
								if (s <= max && s >= min)
									shu++;
								s -= ap[m] + bp[n];
							}
						for (v = 0; v < c; v++) {
							s = s + cp[v];
							if (s <= max && s >= min)
								shu++;
							s = s - cp[v];
						}
					}
		printf("%d\n", shu);

	}
	return 0;
}
