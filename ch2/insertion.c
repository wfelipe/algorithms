#include "sort.h"

void insertion (int *v, int size)
{
	int i, j;
	int key;

	for	(j = 1; j < size; j++)
	{
		key = v[j];
		i = j - 1;
		while (i >= 0 && v[i] > key)
		{
			v[i + 1] = v[i];
			i--;
		}
		v[i + 1] = key;
	}
}
