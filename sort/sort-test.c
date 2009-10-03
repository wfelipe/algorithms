#include <stdio.h>
#include "sort.h"

int main (int argc, char **argv)
{
	int v[10] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
	int size = 10;
	int i;
	struct vector ve = {
		.v = v,
		.size = size,
	};

	print_array (v, size);
	printf ("max: %d\n", heap_extract_max (&ve));
	print_array (v, size);
	
	return 0;
}
