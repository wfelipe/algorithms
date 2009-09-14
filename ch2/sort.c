#include <stdio.h>

void print_array (int *v, int size)
{
	int i;

	printf ("{");
	for (i = 0; i < size; i++)
	{
		printf ("%d, ", v[i]);
	}
	printf ("\b\b}\n");
}
