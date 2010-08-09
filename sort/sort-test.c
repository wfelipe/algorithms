#include <stdio.h>
#include "sort.h"

int main(int argc, char **argv)
{
/*
	int v[10] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
	int size = 10;
*/
	//int v[8] = { 2, 1, 3, 8, 7, 5, 6, 4 };
	int v[8] = { 2, 8, 7, 1, 3, 5, 6, 4 };
	int size = 8;
	int i;
	struct vector ve = {
		.v = v,
		.size = size,
	};

	print_array(v, size);
	quicksort(v, size);
	print_array(v, size);

	return 0;
}
