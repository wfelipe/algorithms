#include "sort.h"

//#define HEAP_PARENT(i) (i/2 + i%2 - 1)

int heap_parent (int i) { return (i/2 + i%2 - 1); }
int heap_left (int i) { return (2*i + 1); }
int heap_right (int i) { return (2*i + 2); }

void heap_max_heapify (int *v, int size, int i)
{
	int l, r;
	int largest;

	l = HEAP_LEFT (i);
	r = HEAP_RIGHT (i);

	if (l <= size - 1 && v[l] > v[i])
		largest = l;
	else
		largest = i;
	if (r <= size - 1 && v[r] > v[largest])
		largest = r;
	if (largest != i)
	{
		swap (v, r, largest);
		heap_max_heapify (v, size, largest);
	}
}

void heap_build_max_heap (int *v, int size)
{
	int i;
	for (i = size/2; i > 0; i--)
		heap_max_heapify (v, size, i);
}

void heapsort (int *v, int size)
{
	int i;

	heap_build_max_heap (v, size);
	for (i = size - 1; i > 1; i++)
	{
		swap (v, 0, i);
		size--;
		heap_max_heapify (v, size, 1);
	}
}
