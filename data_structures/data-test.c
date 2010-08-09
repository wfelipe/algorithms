/* printf */
#include <stdio.h>
/* to use free() */
#include <stdlib.h>

#include "data.h"

void test_stack();

int main(int argc, char **argv)
{
	test_stack();

	return 0;
}

void test_stack()
{
	struct stack *s;
	int i, j;

	printf("\tstack\n");

	s = malloc(sizeof(struct stack));

	stack_init(s);
	if(stack_empty(s))
		printf("stack empty\n");

	for(i = 1; i <= 10; i++)
		stack_push(s, i);

	for(i = 10; i >= 1; i--)
		if(stack_pop(s) != i)
			printf("error\n");

	if(stack_empty(s))
		printf("stack empty again\n");
}
