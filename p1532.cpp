#include <stdio.h>
#include <string.h>

int main() {
	char a;
	double c;
	int d, e, f = 1, g;
	char b[1000];
	while (gets(b) != NULL) {

		e = strlen(b);
		for (d = 0; d < e / 2; d++) {
			if (b[d] == b[e - d - 1])
				f = 1;
			else {
				f = 0;
				break;
			}
		}
		if (f == 1)
		printf("YES\n");
	else
		printf("NO\n");
	}
	
	return 0;
}
