#include <stdlib.h>
#include <stdio.h>
#include <values.h>
#include "sort.h"

void _merge (int *v, int p, int q, int s)
{
	int n1, n2;
	int *r, *l;
	int i, j, m;

	n1 = q - p;
	n2 = s - q - 1;

	r = malloc (sizeof (int)*n1 + 1);
	l = malloc (sizeof (int)*n2 + 1);

	for (i = 0; i < n1 + 1; i++)
		r[i] = v[p + i];
	for (j = 0; j < n2 + 1; j++)
		l[j] = v[q + 1 + j];
	r[n1 + 1] = l[n2 + 1] = MAXINT;

	for (m = p, i = 0, j = 0; m < s + 1; m++)
	{
		if (l[i] <= r[j])
		{
			v[m] = l[i];
			i++;
		}
		else
		{
			v[m] = r[j];
			j++;
		}
	}

	free (r);
	free (l);
}

void _mergesort (int *v, int p, int r)
{
	int q;

	if (p < r)
	{
		q = (p + r)/2;

		_mergesort (v, p, q);
		_mergesort (v, q + 1, r);
		_merge (v, p, q, r);
	}
}

void merge (int *v, int size)
{
	_mergesort (v, 0, size - 1);
}
