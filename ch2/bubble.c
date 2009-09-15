#include "sort.h"

void bubblesort (int *v, int size)
{
	int i, j;

	for (i = 0; i < size; i++)
		for (j = size - 1; j > i; j--)
			if (v[j] < v[j - 1])
				swap (v, j, j - 1);
}

void bubblesort_higher (int *v, int size)
{
	int i, j;

	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i; j++)
			if (v[j] > v[j + 1])
				swap (v, j, j + 1);
}
