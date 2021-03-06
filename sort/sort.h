/* common functions */
void print_array(int *v, int size);
void swap(int *v, int i, int j);
int *clone_array(int *v, int size);

/* insertion sort */
void insertion(int *v, int size);

/* merge sort */
void _merge(int *v, int p, int q, int r);
void _mergesort(int *v, int p, int r);
void merge(int *v, int size);

/* bubble sort */
void bubblesort(int *v, int size);

/* heap sort */
#define HEAP_PARENT(i) (i/2 + i%2 - 1)
/* #define HEAP_LEFT(i) (2*i + 1) */
/* #define HEAP_RIGHT(i) (2*i + 2) */
#define HEAP_LEFT(i) ((i << 1) + 1)
#define HEAP_RIGHT(i) ((i << 1) + 2)
int heap_parent(int i);
int heap_left(int i);
int heap_right(int i);
void heap_max_heapify(int *v, int size, int i);
void heap_build_max_heap(int *v, int size);
void heapsort(int *v, int size);

/* heap sort for priority queue */
struct vector {
	int *v;
	int size;
};
int heap_extract_max(struct vector *v);

/* quicksort */
void quicksort(int *v, int size);
void quicksort_real(int *v, int p, int r);
int quicksort_partition(int *v, int p, int r);
