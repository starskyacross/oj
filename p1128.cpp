#include <stdio.h>

int main() {
	int a[101], b[101], m, n, i, x;
	while (scanf("%d %d", &m, &n) != EOF) {
		int j = 1, count = 0;
		x = m;             //��ֹ�ڱ��������������ݸ���
		for (i = 1; i <= m; i++) { //�����洢��������
			a[i] = i;
		}
		while (x >= 1) {
			for (i = 1; i <= m; i++) {
				if (a[i] != 0) {
					count++;         //����
				}
				if (count == n) {
					b[j] = a[i];    //����һ���������°�˳���¼
					a[i] = 0;       //�Ѿ��������Ľ���ֵ��Ϊ0
					count = 0;      //���¿�ʼ����
					x--;            //�����ڼ���
					j++;
				}
			}
		}
		for (i = 1; i <= m; i++) {      //���
			printf("%d ", b[i]);
		}
		printf("\n");
	}
	return 0;
}
