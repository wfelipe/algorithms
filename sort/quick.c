#include "sort.h"

void quicksort(int *v, int size)
{
	quicksort_real(v, 0, size - 1);
}

void quicksort_real(int *v, int p, int r)
{
	int q;

	if (p < r) {
		q = quicksort_partition(v, p, r);
		quicksort_real(v, p, q - 1);
		quicksort_real(v, q + 1, r);
	}
}

int quicksort_partition(int *v, int p, int r)
{
	int x, i, j;

	x = v[r];
	i = p - 1;

	for (j = p; j < r; j++) {
		if (v[j] <= x) {
			i++;
			swap(v, i, j);
		}
	}
	swap(v, i + 1, r);

	return i + 1;
}
