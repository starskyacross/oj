#include <stdio.h>

int main() {
	int n, m, i, j, k, l, number, door;
	int a[101][2001] = {0}, a1[101] = {0};
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a1[i]);  //a1��i���ŵ�����
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= a1[i]; j++) {
			scanf("%d", &a[i][j]);//a�ǵ�i����ÿ���˵ı��
		}
	}
	scanf("%d", &k);//k�ǻ�����
	i = 1;
	for (i = 1; i <= k; i++) {
		scanf("%d %d", &number, &door); //number�ǵ�i���ı��//door�ǵ�i�����ź�
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