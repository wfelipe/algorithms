#include <stdio.h>
#include "sort.h"

int main (int argc, char **argv)
{
	int v[10] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
	int size = 10;
	int i;

	print_array (v, size);
	heapsort (v, size);
	print_array (v, size);
	
	return 0;
}
