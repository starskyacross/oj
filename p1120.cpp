#include <stdio.h>
#include <string.h>

int main() {

	int w, a[201] = {0}, b[201] = {0};
	char c[201] = {'\0'}, d[201] = {'\0'}; //*字符数组用来储存输入的两个大整数
	scanf("%d", &w);
	for (int p = 0; p < w; p++) {
		scanf("%s%s", c, d);
		int i, j, k = 0;
		for (i = 0, j = strlen(c) - 1; j >= 0;) //*将字符串转变为整型 ，此处将数反过来储存在整型数组中，方便相加
			a[i++] = c[j--] - '0';
		for (i = 0, j = strlen(d) - 1; j >= 0;) //*strlen()-1是要不考虑空字符'\0'的位置
			b[i++] = d[j--] - '0';

		while (k <= 200) {            //*判断每一位相加后是否大于10，如果大于就往前一位进1，相应的原位数就减10
			a[k] += b[k];
			if (a[k] >= 10) {
				a[k + 1]++;
				a[k] -= 10;
			}
			k++;
		}
		int flag = 0; //*用来检索第一个不为0的位数
		for (i = 200; i >= 0; i--) { //*一开始所有数反过来，所以此处i--，从后面往前，就相当于原来的数从前往后
			if (a[i] != 0) {
				flag = i;
				break;
			}
		}
		if (i == -1)     //*此处i==-1表明i==0时仍然不符合条件，break之后按照条件限制还会减1
			printf("0\n");
		else {
			for (i = flag; i >= 0; i--) //*i--,将数重新正过来
				printf("%d", a[i]);
			putchar('\n');   //*回车换行
		}
	}
	return 0;
}