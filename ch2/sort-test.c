#include <stdio.h>
#include "sort.h"

int main (int argc, char **argv)
{
	int v[6] = {5, 2, 4, 6, 1, 3};
	int size = 6;
	int i;

	print_array (v, size);
	merge (v, size);
	print_array (v, size);
	
	return 0;
}
