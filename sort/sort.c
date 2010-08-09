#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(int *v, int size)
{
	int i;

	printf("{");
	for (i = 0; i < size; i++) {
		printf("%d, ", v[i]);
	}
	printf("\b\b}\n");
}

void swap(int *v, int i, int j)
{
	int aux;

	aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

int *clone_array(int *v, int size)
{
	int *c;

	c = malloc(sizeof(int)*size);
	memcpy(c, v, sizeof(int)*size);
}
