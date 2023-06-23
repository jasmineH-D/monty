#include "monty.h"

/**
 * addOP - adds two top elements from the stack
 * @h: pointer to head of the linked list
 *
 * @numL: line number being interpreted
 *
 * Return: void
 */
void addOP(stack_t **h, unsigned int numL)
{
	int number_one, number_two;

	if (!h || !*h || !(*h)->next)
		addErr(h, numL);
	number_one = (*h)->n;
	number_two = (*h)->next->n;
	*h = (*h)->next;
	free((*h)->prev);
	(*h)->prev = NULL;
	(*h)->n = number_one + number_two;
}
