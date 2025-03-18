#include <stdio.h>

int main(void) {
	int a, b, n;
	scanf("%d %d\n", &a, &b);
	scanf("%d", &n);
	int z, x, c, v; //按顺序为甲喊 甲划 乙喊 乙划
	int count1 = 0, count2 = 0; //count1 为甲喝酒的次数，count2为乙
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &z, &x, &c, &v);
		if ((z + c) == x && (z + c) != v) {
			count1++;
		} else if ((z + c) == v && (z + c) != x) {
			count2++;
		}
		if (count1 > a || count2> b)
			break;
	}
	if (count1 > a) {
		printf("A\n");
		printf("%d", count2);
	} else {
		printf("B\n");
		printf("%d", count1);
	}
	return 0;

}