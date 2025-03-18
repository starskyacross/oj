#include <stdio.h>
#include <stdlib.h>

struct ren {
	int xuhao;
	struct ren *next;
};

int main() {
	int n, i, j, k, l, m,  renshu, sbshu, sbxu, sbmen;
	int a[100001];
	struct ren *men[100001];
	struct ren *p, *q, *newnode;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		men[i] =  (struct ren *)malloc(sizeof(struct ren));
		men[i]->xuhao = -1;
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= a[i]; j++) {
			if (j == 1) {
				p = (struct ren *)malloc(sizeof(struct ren));
				scanf("%d", &p->xuhao);
				p->next = NULL;
				men[i]->next = p;
			} else {
				newnode = (struct ren *)malloc(sizeof(struct ren));
				scanf("%d", &newnode->xuhao);
				while (p->next != NULL) {
					p = p->next;
				}
				p->next = newnode;
				newnode->next = NULL;
			}
		}
	}

	scanf("%d", &sbshu);

	for (i = 1; i <= sbshu; i++) {
		scanf("%d %d", &sbxu, &sbmen);
		newnode = (struct ren *)malloc(sizeof(struct ren));
		newnode->xuhao = sbxu;
		q = men[sbmen]->next;
		men[sbmen]->next = newnode;
		men[sbmen]->next->next = q;
	}

	for (i = 1; i <= n; i++) {
		p = men[i]->next;
		while (p != NULL) {
			printf("%d ", p->xuhao);
			p = p->next;
		}
		printf("\n");
	}
	return 0;
}