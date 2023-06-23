#include "monty.h"

/**
 * freesStack - frees a stack.
 *
 * @stack: pointer to head node of a linked list.
 *
 * Return: void
 */
void freesStack(stack_t *stack)
{
	stack_t *curt;
	stack_t *nxt_node;

	curt = stack;
	while (stack)
	{
		nxt_node = curt->next;
		free(stack);
		curt = nxt_node;
	}
}
