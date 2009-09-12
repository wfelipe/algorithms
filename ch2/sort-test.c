#include <stdio.h>
#include "sort.h"

int main (int argc, char **argv)
{
	int v[6] = {5, 2, 4, 6, 1, 3};
	int size = 6;
	int i;

	insertion (v, size);

	for (i = 0; i < size; i++)
		printf ("%d ", v[i]);
	printf ("\n");
	
	return 0;
}
