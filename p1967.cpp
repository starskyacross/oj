#include <stdio.h>
#include <stdlib.h>

struct student {
	int number;
	struct student *next;
} ;

int main() {
	int i, j, k, l, m, n, x;
	struct student *q,  *newnode, *head, *p;
	scanf("%d", &n);
	head = (struct student *)malloc(sizeof(struct student));
	head->next = NULL;
	p = head;
	for (i = 1; i <= n; i++) {
		getchar();
		scanf("%d", &m);
		switch (m) {
			case 1:
				p = p->next;
				break;
			case 2:
				getchar();
				scanf("%d", &x);
				newnode = (struct student *)malloc(sizeof(struct student));
				newnode->number = x;
				q = p->next;
				p->next = newnode;
				p->next->next = q;
				break;
			case 3:
				q = p->next->next;
				free(p->next);
				p->next = q;
				break;
		}
	}
	p = head->next;
	while (p != NULL) {
		printf("%d ", p->number);
		p = p->next;
	}
	printf("\n");
	return 0;
}