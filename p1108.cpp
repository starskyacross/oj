#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int len, b, c, i, shu;
	char a[100];
	while (gets(a) != NULL) {
		if (a[0] == '0')
			break;
		else {
			shu = 0;
			len = strlen(a);
			for (i = 0; i < len; i++) {
				b = a[i] - '0';
				c = b * pow(2, double (len - 1 - i));
				shu = shu + c;
			}
			shu = (int)shu;
			printf("%X\n", shu);
		}
	}
	return 0;
}