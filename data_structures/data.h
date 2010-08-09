#define MAX_LENGTH 256

/* stack */
struct stack {
	int position;
	int s[MAX_LENGTH];
};

void stack_init(struct stack *s);
int stack_empty(struct stack *s);
void stack_push(struct stack *s, int item);
int stack_pop(struct stack *s);
