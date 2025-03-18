#include <stdio.h>
#include <string.h>
void hour(int h, int h1, int h2);
void min(int m, int m1, int m2);

int main() {
	int h, m, m1, m2, h1, h2;
	char a, b;
	while (scanf("%d %d", &h, &m) != EOF) {
		h1 = h / 10;
		h2 = h % 10;
		hour(h, h1, h2);
		m1 = m / 10;
		m2 = m % 10;
		min(m, m1, m2);
	}
	return 0;
}

void hour(int h, int h1, int h2) {
	char shu[21][21] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",
	                    "fifteen", "sixteen", "seventeen", "nineteen"
	                   };
	if (h < 20) {
		printf("%s ", shu[h]);
	} else {
		if (h2 == 0)
			printf("twenty ");
		else
			printf("twenty %s ", shu[h2]);
	}
}

void min(int m, int m1, int m2) {
	char shu1[21][21] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",
	                     "fifteen", "sixteen", "seventeen", "nineteen"
	                    };
	char shu2[8][10] = {"\0", "\0", "twenty", "thirty", "forty", "fifty", "sixty"};
	if (m1 == 0 && m2 == 0)
		printf("o'clock\n");
	else if (m < 20 && m > 0)
		printf("%s\n", shu1[m]);
	else {
		if (m2 == 0)
			printf("%s\n", shu2[m1]);
		else
			printf("%s %s\n", shu2[m1], shu1[m2]);
	}
}