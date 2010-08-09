#include <string.h>
#include <stdio.h>

#include "data.h"

void stack_init(struct stack *s)
{
	s->position = 0;
	memset(s->s, 0, sizeof(s->s));
}

int stack_empty(struct stack *s)
{
	if(s->position == 0) return 1;
	else return 0;
}

void stack_push(struct stack *s, int item)
{
	s->s[++s->position] = item;
}

int stack_pop(struct stack *s)
{
	if(stack_empty(s))
		return -1;
	else
		return s->s[s->position--];
}
