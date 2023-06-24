#include "monty.h"

/**
 * pallOP - prints all element of the stack.
 * @stack: pointer to the head of linked list
 * @numL: line number where error occured.
 *
 * Return: void.
 */
void pallOP(stack_t **stack, unsigned int numL)
{
	stack_t *new_node = NULL;

	if (!numL)
		return;
	new_node = *stack;
	while (new_node)
	{
		printf("%d\n", new_node->n);
		new_node = new_node->next;
	}
}
/**
 * pintOP - prints the first element
 * @h: pointer to head of linked list
 * @numL: line number wherer error occured
 *
 * Return: void.
 */
void pintOP(stack_t **h, unsigned int numL)
{
		if (!h || !*h)
			pintErr(h, numL);
		printf("%d\n", (*h)->n);
}
