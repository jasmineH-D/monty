#include "monty.h"

/**
 * popOP - function that handles removing element from stack
 * @h: pointer to head of stack
 * @numL: line number wherer error occured
 * Return: void
 */
void popOP(stack_t **h, unsigned int numL)
{
	stack_t *new_node;

	if (!h || !*h)
		popErr(h, numL);
	new_node = *h;
	if (new_node->next_node == NULL)
	{
		free(*h);
		*h = NULL;
	}
	else
	{
		(*h) = (*h)->next_node;
		(*h)->prev_node = NULL;
		free(new_node);
	}
}
