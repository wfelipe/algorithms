#include "sort.h"

//#define HEAP_PARENT(i) (i/2 + i%2 - 1)

int heap_parent(int i)
{
	return (i / 2 + i % 2 - 1);
}

int heap_left(int i)
{
	return (2 * i + 1);
}

int heap_right(int i)
{
	return (2 * i + 2);
}

void heap_max_heapify(int *v, int size, int i)
{
	int l, r;
	int largest;

	l = HEAP_LEFT(i);
	r = HEAP_RIGHT(i);

	if (l < size && v[l] > v[i])
		largest = l;
	else
		largest = i;
	if (r < size && v[r] > v[largest])
		largest = r;
	if (largest != i) {
		swap(v, i, largest);
		heap_max_heapify(v, size, largest);
	}
}

void heap_build_max_heap(int *v, int size)
{
	int i;
	for (i = (size/2) - 1; i >= 0; i--)
		heap_max_heapify(v, size, i);
}

void heapsort(int *v, int size)
{
	int i;

	heap_build_max_heap(v, size);
	for (i = size - 1; i > 0; i--) {
		swap(v, 0, i);
		size--;
		heap_max_heapify(v, size, 0);
	}
}

/* priority queue */
int heap_maximum(struct vector *v)
{
	return v->v[0];
}

int heap_extract_max(struct vector *v)
{
	int max;

	if (v->size < 1)
		return -1;

	max = v->v[0];
	v->v[0] = v->v[v->size - 1];
	v->size--;
	heap_max_heapify(v->v, v->size, 0);

	return max;
}

void heap_increase_key(struct vector *v, int i, int key)
{
	if (key < v->v[i])
		return;

	v->v[i] = key;

	while (i > 1 && v->v[HEAP_PARENT(i)] < v->v[i]) {
		swap(v->v, i, HEAP_PARENT(i));
		i = HEAP_PARENT(i);
	}

}
