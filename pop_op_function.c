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
	if (new_node->next == NULL)
	{
		free(*h);
		*h = NULL;
	}
	else
	{
		(*h) = (*h)->next;
		(*h)->prev= NULL;
		free(new_node);
	}
}
