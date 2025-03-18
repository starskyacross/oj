#include <stdio.h>
#include <string.h>

int main() {
	int a, b = 0, c, d, e;
	char yuan[1000];
	char hou[1000];
	while (scanf("%s", &yuan) != EOF) {
		for (a = 0; yuan[a] == '*'; a++) {
			hou[b] = yuan[a];
			b++;
		}
		while (yuan[a] != '\0') {
			if (yuan[a] != '*')
				hou[b++] = yuan[a++];
			else
				a++;
		}
		hou[b] = '\0';
		printf("%s\n", hou);
		b = 0;
		a = 0;
	}
	return 0;
}
