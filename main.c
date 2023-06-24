#include "monty.h"

/**
 * main - interpreter for monty files
 * @argc: number of arguments passed
 * @argv: an array of the arguments passed
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	FILE *fileop;
	char *buf_L, opbuf[20], buf_VAL[20];
	ssize_t read_Byt, tokens = 0;
	size_t bufLen = 0;
	unsigned int numL = 0;
	stack_t *stack = NULL;

	if (argc != 2 || !argv[1])
		useErr();
	valStack.mode = 0;
	valStack.file = argv[1];
	fileop = fopen(valStack.file, "r");
	if (!fileop)
		fileErr();
	while ((read_Byt = getline(&buf_L, &bufLen, fileop)) != -1)
	{
		numL++;
		tokens = sscanf(buf_L, "%s %s", opbuf, buf_VAL);
		if (tokens > 2)
		{
			free(buf_L);
			useErr();
		}
		free(buf_L);
		buf_L = NULL;
		valStack.code = buf_VAL;
		valStack.n = buf_VAL;
		if (tokens > 0 && valStack.code[0] != '#')
			op_functions(valStack.code)(&stack, numL);
		memset(opbuf, '\0', sizeof(opbuf));
		memset(buf_VAL, '\0', sizeof(buf_VAL));
	}
	free(buf_L);
	freesStack(stack);
	fclose(fileop);
	return (0);
}
