#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i, p, q, n, p_flag, q_flag ;
	while (scanf("%d", &n) != EOF) {
		if (n % 2 == 1)
			printf("数据输入出错\n");

		else {

			p = 1;
			do {
				p = p + 1;

				q = n - p;
				p_flag = 1;

				for (i = 2; i <= sqrt((float)p); i++)
					if (p % i == 0) {
						p_flag = 1;
						break;
					}
				q_flag = 1;
				for (i = 2; i <= sqrt((float)q); i++)
					if (q % i == 0) {
						q_flag = 1;
						break;
					}
			} while ( q_flag * p_flag == 0);
			printf("%d+%d\n", p, q);

		}
	}
	return 0;
}