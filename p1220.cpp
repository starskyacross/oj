#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x[9] = { 0 }; //�� ���±��1-8

int y[9] = { 0 }; //�� ���±��1-8

int leading_diagonal[16] = { 0 };//���Խ��� ���±��1-15
int counter_diagonal[16] = { 0 };//���Խ��� ���±��1-15

int count = 0;//�ܿ�����

void put_queen(int n, int m) { //n�����еĻʺ�������m�����ʺ�����
	//�������ڣ�������ÿһ�ж�����һ�����ӣ�Ҳ����8������ʱ�� ��������,������+1
	if (n == m) {
		++count;
		return;
	}
	//�����ݹ鲿��
	else {
		for (int i = 1; i <= 8; i++) { //�ӵ�һ�п�ʼ��һ��һ�еı���
			if (x[i] == 1)
				continue;//����Ѿ������ˣ����ǲ���ִ�У������ж���һ���Ƿ����
			for (int j = 1; j <= 8; j++) { //һ��һ�г���
				//�������ȷ�����������Խ��߷����������ʵ����Ҫһ������ģ�������ʱ���˺þã����ҹ���Ҳ�а�
				if (y[j] == 0 && leading_diagonal[i - j + 8] == 0 && counter_diagonal[i + j - 1] == 0) {
					//��������������������
					x[i] = 1;
					y[j] = 1;
					leading_diagonal[i - j + 8] = 1;
					counter_diagonal[i + j - 1] = 1;
					put_queen(n + 1, m);//������һ�㣬�ж���һ������
					//����ľ��ǻ��ݣ������Ժ���һ�����ӵ�����ȡ�������ж���һ�� ���ⲻ����һ��£���߲����Ļ�����������ݹ飩
					x[i] = 0;
					y[j] = 0;
					leading_diagonal[i - j + 8] = 0;
					counter_diagonal[i + j - 1] = 0;
				} else //�������ӵĻ���������һ������
					continue;
			}
			break;//���break�Ǳ�Ҫ��
			/* ��Ȼ������ݵ���һ�㣬����ÿһ�ж����Թ������Ժ�����ϣ�����ǻص���һ�н������ӣ����û�����break�Ļ�
			ѭ���������һ�е������Ѿ������������ʵ������һ�н������ӣ����Ǳ�����˴��� �������������ô���ˡ���������*/

		}
	}
	return;
}

int main() {
	int qipan[9][9] = { 0 };
	for (int i = 1; i <= 8; i++)
		for (int j = 1; j <= 8; j++)
			scanf("%d", &qipan[i][j]);

	int num_queen = 0;//���������ʼ�������ֲ�֪��������Ҫ�ü�������ס,�����ݵ����ݺ�����
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++) {
			if (qipan[i][j] == 1) {
				++num_queen;
				x[i] = 1;
				y[j] = 1;
				leading_diagonal[i - j + 8] = 1;
				counter_diagonal[i + j - 1] = 1;
			}
		}
	}


	put_queen(num_queen, 8);
	printf("%d\n", count);

	return 0;
}