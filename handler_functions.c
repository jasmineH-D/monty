#include "monty.h"

/**
 * op_functions - Searches for the corresponding function  for opcode.
 *
 * @str: the opcode to search for.
 *
 * Return: pointer to the function that Handles the opcode.
 */
void (*op_functions(char *str))(stack_t **, unsigned int)
{
	instruction_t instructions[] = {
		{"pall", pallOP},
		{"push", pushOP},
		{"pint", pintOP},
		{"pop", popOP},
		{"swap", swapOP},
		{"add", addOP},
		{"nop", nopOP},
		{"#", nopOP},
		{NULL, NULL}
		};

		int y = 0;

		while (instructions[y].opcode)
		{
			if (strcmp(instructions[y].opcode, str) == 0)
			return (instructions[y].f);
			y++;
		}
		return (opcodeError);
}
