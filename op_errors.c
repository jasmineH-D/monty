#include "monty"

/**
 * addErr - error case for addOP funct
 * @stack: pointer to head of a doubly linked list
 * @numL: line number where the error occurred
 *
 * Return: void
 */
void addErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can not addition, stack is too short \n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}

/**
 * pushErr - handles the error case for pushOP
 * @stack: pointer to the head of a doubly  linked list
 * @numL: line number where the error occurred
 *
 * Return: void
 */
void pushErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: usage: push integer\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}

/**
 * pintErr - handles the error case for printing int pintOP
 * @stack: pointer to head node of a doubly  linked list
 * @numL: line number where error occurred
 *
 * Return: void
 */
void pintErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can not pint, stack empty\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}

/**
 * swapErr - handles the error case for swapOP
 * @stack: pointer to the head of a linked list
 * @numL: line number where error occurred
 *
 * Return: void
 */
void swapErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can not swap, stack is too short\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}


/**
 * popErr - handles the error case for popOP
 * @stack: pointer to the head node of a linked list
 * @numL: line number where error occured
 *
 * Return: void
 */
void popErr(stack_t **stack, unsigned int numL)
{
	fprintf(stderr, "L%d: can not pop from an empty stack\n", numL);
	freeStack(*stack);
	exit(EXIT_FAILURE);
}
