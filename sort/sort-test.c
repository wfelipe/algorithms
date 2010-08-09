/* printf */
#include <stdio.h>
/* to use free() */
#include <stdlib.h>
#include "sort.h"

int main(int argc, char **argv)
{
/*
	int v[10] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
	int size = 10;
*/
	//int v[8] = { 2, 1, 3, 8, 7, 5, 6, 4 };
	int v[8] = { 2, 8, 7, 1, 3, 5, 6, 4 };
	int *c;
	int size = 8;
	int i;
	struct vector ve = {
		.v = v,
		.size = size,
	};

	printf("original array\n");
	print_array(v, size);

	/* insertion sort */
	printf("\tinsert sort\n");
	c = clone_array(v, size);
	insertion(c, size);
	print_array(c, size);
	free(c);

	/* merge sort */
	printf("\tmerge sort\n");
	c = clone_array(v, size);
	merge(c, size);
	print_array(c, size);
	free(c);

	/* bubble sort */
	printf("\tbubble sort\n");
	c = clone_array(v, size);
	bubblesort(c, size);
	print_array(c, size);
	free(c);

	/* heap sort */
	printf("\theap sort\n");
	c = clone_array(v, size);
	heapsort(c, size);
	print_array(c, size);
	free(c);

	/* quicksort */
	printf("\tquicksort\n");
	c = clone_array(v, size);
	quicksort(c, size);
	print_array(c, size);
	free(c);

	return 0;
}
