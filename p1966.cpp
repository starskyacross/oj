#include <stdio.h>

int main() {
	int n, m, i, j, k, l, number, door;
	int a[101][2001] = {0}, a1[101] = {0};
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a1[i]);  //a1是i的门的人数
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= a1[i]; j++) {
			scanf("%d", &a[i][j]);//a是第i个门每个人的编号
		}
	}
	scanf("%d", &k);//k是坏人数
	i = 1;
	for (i = 1; i <= k; i++) {
		scanf("%d %d", &number, &door); //number是第i坏的编号//door是第i坏的门号
		for (j = a1[door]; j >= 1; j--) {
			a[door][j + 1] = a[door][j];
		}
		a[door][1] = number;
		a1[door] = a1[door] + 1;
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= a1[i]; j++) {
			printf("%d ", a[i][j]);

		}
		printf("\n");
	}
	return 0;
}