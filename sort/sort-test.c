#include <stdio.h>
#include "sort.h"

int main (int argc, char **argv)
{
	int v[6] = {5, 2, 4, 6, 1, 3};
	int size = 6;
	int i;

	print_array (v, size);
	for (i = 0; i < 10; i++)
		printf ("%d parent %d, left %d, right %d\n", i, HEAP_PARENT (i), HEAP_LEFT (i), HEAP_RIGHT (i));
	heapsort (v, size);
	print_array (v, size);
	
	return 0;
}
