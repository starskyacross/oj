#include <stdio.h>
#include <stdlib.h>

void merge_arrays(int arr1[], int m, int arr2[], int n) {
	int i = 0, j = 0, k = 0;
	int merged[m + n];

	while (i < m && j < n) {
		if (arr1[i] < arr2[j]) {
			merged[k++] = arr1[i++];
		} else {
			merged[k++] = arr2[j++];
		}
	}

	while (i < m) {
		merged[k++] = arr1[i++];
	}

	while (j < n) {
		merged[k++] = arr2[j++];
	}

	for (int l = 0; l < m + n; l++) {
		printf("%d ", merged[l]);
	}
	printf("\n");
}

int main() {
	int m, n, a, b, c;
	int arr1[40];
	int arr2[40];
	scanf("%d%d", &m, &n);
	for (a = 0; a < m; a++)
		scanf("%d", &arr1[a]);
	for (b = 0; b < n; b++)
		scanf("%d", &arr2[b]);
	merge_arrays(arr1, m, arr2, n);
	return 0;
}