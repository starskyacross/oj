#include <stdio.h>
#include <stdlib.h>
#define N 10001
int n, len, num;

int distance[N] = {0};

void Scanf() {
	scanf("%d%d", &len, &num);
	int i;

	for (i = 0; i < num; i ++)
		scanf("%d", &distance[i]);
}

int min() {
	int dis[N] = {0}, i;
	for (i = 0; i < num; i ++) {
		if (distance[i] >= len / 2)
			dis[i] = len - distance[i];
		else if (distance[i] <= len / 2)
			dis[i] = distance[i];
	}

	int imin = 0;
	for (i = 0; i < num; i ++)
		if (dis[i] > imin)
			imin = dis[i];

	return imin;
}

int max() {
	int dis[N] = {0}, i;
	for (i = 0; i < num; i ++) {
		if (distance[i] >= len / 2)
			dis[i] = distance[i];
		else if (distance[i] <= len / 2)
			dis[i] = len - distance[i];
	}

	int imax = 0;
	for (i = 0; i < num; i ++)
		if (dis[i] > imax)
			imax = dis[i];

	return imax;
}

void Printf() {
	printf("%d %d\n", min(), max());
}

void Initialize () {
	int i;
	for (i = 0; i < N; i ++)
		distance[i] = 0;
}

int main() {
	scanf("%d", &n);

	while (n--) {
		Scanf();

		Printf();

		Initialize();
	}

	return 0;
}
