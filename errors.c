#include "monty.h"

/**
 * useErr - error usage
 */

void useErr(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * fileErr - file error
 */

void fileErr(void)
{
	fprintf(stderr, "Error: Can not open the file %s \n", valStack.file);
	exit(EXIT_FAILURE);
}

/**
 * mallocErr - handle malloc space error
 * @stack: ponter to the stack
 */
void mallocErr(stack_t **stack)
{
	fprintf(stderr, "Error: malloc is failed \n");
	freesStack(*stack);
	exit(EXIT_FAILURE);
}

/**
 * opcodeErr - error in opcode
 * @stack: pointer to head of linked list
 * @numbr: number of the line
 * Return: void
 */
void opcodeErr(stack_t **stack, unsigned int numbr)
{
	fprintf(stderr, "L%d: unknown the instruction %s\n", numbr, valStack.code);
	freesStack(*stack);
	exit(EXIT_FAILURE);
}
