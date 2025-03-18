#include <stdio.h>

int main() {
	long long int n;
	while (scanf("%lld", &n) != EOF) {
		if ((n + 2) % 4 == 0)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}