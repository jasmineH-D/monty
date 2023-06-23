#include "monty.h"

/**
 * swapOP - swaps values of top two elements in the stack.
 * @h: pointer to the head of linked list.
 * @numL: line number wherer error occurred.
 *
 * Return: void.
 */

void swapOP(stack_t **h, unsigned int numL)
{
	int temp_val;

	if (!h || !*h || (*h)->next_node == NULL)
		swapErr(h, numL);
	temp_val; = (*h)->n;
	(*h)->n = (*h)->next_node->n;
	(*h)->next_node->n = temp_val;;
}
