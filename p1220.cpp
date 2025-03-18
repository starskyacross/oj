#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x[9] = { 0 }; //行 用下标从1-8

int y[9] = { 0 }; //列 用下标从1-8

int leading_diagonal[16] = { 0 };//主对角线 用下标从1-15
int counter_diagonal[16] = { 0 };//副对角线 用下标从1-15

int count = 0;//总可能性

void put_queen(int n, int m) { //n是已有的皇后数量，m是最大皇后数量
	//函数出口，当我们每一行都放上一个棋子，也就是8个棋子时， 结束函数,计数器+1
	if (n == m) {
		++count;
		return;
	}
	//函数递归部分
	else {
		for (int i = 1; i <= 8; i++) { //从第一行开始，一行一行的遍历
			if (x[i] == 1)
				continue;//如果已经落子了，我们不予执行，继续判断下一行是否可行
			for (int j = 1; j <= 8; j++) { //一列一列尝试
				//下面这个确定主（副）对角线方向的坐标其实是需要一定计算的，题主当时想了好久，找找规律也行叭
				if (y[j] == 0 && leading_diagonal[i - j + 8] == 0 && counter_diagonal[i + j - 1] == 0) {
					//若满足落子条件，落子
					x[i] = 1;
					y[j] = 1;
					leading_diagonal[i - j + 8] = 1;
					counter_diagonal[i + j - 1] = 1;
					put_queen(n + 1, m);//进入下一层，判断下一个棋子
					//下面的就是回溯，出来以后将上一次落子的棋子取消掉，判断下一列 （这不是下一层奥，这边不懂的话重新理解理解递归）
					x[i] = 0;
					y[j] = 0;
					leading_diagonal[i - j + 8] = 0;
					counter_diagonal[i + j - 1] = 0;
				} else //不能落子的话，尝试下一列落子
					continue;
			}
			break;//这个break是必要的
			/* 不然在你回溯到上一层，并且每一列都尝试过不行以后，我们希望的是回到上一行进行落子，如果没有这个break的话
			循环会忽略上一行的落子已经不行了这个事实，到下一行进行落子，于是便出现了错误 （终于想出来怎么讲了····）*/

		}
	}
	return;
}

int main() {
	int qipan[9][9] = { 0 };
	for (int i = 1; i <= 8; i++)
		for (int j = 1; j <= 8; j++)
			scanf("%d", &qipan[i][j]);

	int num_queen = 0;//我们这题初始棋子数字不知道，我们要用计数器记住,并传递到回溯函数中
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