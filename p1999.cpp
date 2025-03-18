#include <bits/stdc++.h>
using namespace std;

struct O {
	int x;
	float y;
	int z;
} o[10010]; //开结构体数组：x记录是第几个人，y记录钱数，z记录抢到红包的个数

int G(O a, O c) {
	if (a.y == c.y) {
		if (a.z != c.z)
			return a.z > c.z;
		else
			return a.x < c.x;
	}
	return a.y > c.y;
}//按照题目要求排序输出....收入金额从高到低的递减顺序输出

//如果收入金额有并列，则按抢到红包的个数递减输出
//如果还有并列，则按个人编号递增输出....
int main() {
	memset(o, 0, sizeof(o)); //数组归零
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		int M;
		int sum = 0;
		scanf("%d", &M);
		o[i].x = i;
		for (int j = 0; j < M; j++) {
			int X, Y;
			scanf("%d", &X);
			scanf("%d", &Y);
			o[X].y += Y;
			o[X].z++;
			sum += Y;
		}
		o[i].y -= sum;
	}
	sort(o + 1, o + 1 + N, G); //排序
	for (int i = 1; i <= N; i++) {
		printf("%d %.2f\n", o[i].x, o[i].y / 100);
	}
}
#include <stdio.h>
/*
struct hongbao {
	int biao;
	int k;
	int n[1000];
	int p[1000];
	int qian;
	int ge;
};

int main() {
	int N, k, i, j, x,
	    l, m, n;
	scanf("%d", &N);
	struct hongbao a[10001];

	for (i = 1; i <= N; i++) {
		a[i].qian = 0;
		a[i].biao = i;
		a[i].ge = 0;
		scanf("%d", &(a[i].k));
		n = a[i].k;
		for (j = 1; j <= n; j++) {
			scanf("%d %d", &(a[i].n[j]), &(a[i].p[j]));
			a[i].qian = a[i].qian - a[i].p[j];
		}
	}

	for (i = 1; i <= N; i++)
		for (j = 1; j <= (a[i].k); j++) {
			for (n = 1; n <= N; n++) {
				if (n == a[i].n[j]) {
					a[n].qian = a[n].qian + a[i].p[j];
					a[n].ge = a[n].ge + 1;
				}
			}
		}
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N - 1; j++) {
			if (a[j].qian < a[j + 1].qian) {
				l = a[j + 1].qian;
				a[j + 1].qian = a[j].qian;
				a[j].qian = l;
				k = a[j].biao;
				a[j].biao = a[j + 1].biao;
				a[j + 1].biao = k;
				x = a[j + 1].ge;
				a[j + 1].ge = a[j].ge;
				a[j].ge = x;
			}
			if (a[j].qian == a[j + 1].qian) {
				if (a[j].ge < a[j + 1].ge) {
					l = a[j + 1].qian;
					a[j + 1].qian = a[j].qian;
					a[j].qian = l;
					k = a[j].biao;
					a[j].biao = a[j + 1].biao;
					a[j + 1].biao = k;
					x = a[j + 1].ge;
					a[j + 1].ge = a[j].ge;
					a[j].ge = x;
				}
			}

		}
	}
	for (i = 1; i <= N; i++) {
		printf("%d %.2f\n", a[i].biao, (a[i].qian * 1.0 / 100));
	}
	return 0;
}*/