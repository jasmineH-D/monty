#ifndef _MONTY_H
#define _MONTY_H

#define  _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

/**
 *
 * struct stack_s - Doubly linked list representation of a stack (or queue)
 * @data: Integer value stored in the node
 * @prev_node: Pointer to the previous element in the stack (or queue)
 * @next_node: Pointer to the next element in the stack (or queue)
 * Description: This structure defines a node in a doubly linked list
 * used for implementing stack, queue, LIFO, and FIFO operations.
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - Structure representing an opcode and its handler function
 * @opcode: The opcode string
 * @func: The function pointer to handle the opcode
 *
 * Description: This structure associates an opcode with its corresponding
 * handler function. It is used for stack, queues, LIFO, FIFO operations.
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/* op functions handler */
void (*op_functions(char *str))(stack_t **stack, unsigned int numL);

/* free stack */
void freesStack(stack_t *stack);

/* op functions*/
void pushOP(stack_t **stack, unsigned int line_number);
void pallOP(stack_t **stack, unsigned int line_number);
void pintOP(stack_t **stack, unsigned int line_number);
void popOP(stack_t **stack, unsigned int line_number);
void swapOP(stack_t **stack, unsigned int line_number);
void addOP(stack_t **stack, unsigned int line_number);
void nopOP(stack_t **stack, unsigned int line_number);

/* error handlers */
void fileErr(void);
void useErr(void);
void mallocErr(stack_t **stack);
void opcodeErr(stack_t **stack, unsigned int numL);
void addErr(stack_t **stack, unsigned int numL);
void pushErr(stack_t **stack, unsigned int numL);
void pintErr(stack_t **stack, unsigned int numL);
void swapErr(stack_t **stack, unsigned int numL);
void popErr(stack_t **stack, unsigned int numL);


/* shared vars */
/**
 * struct valStack - shared a variables in the program
 * @n: value
 * @file: file to read.
 * @code: tokenized a command
 * @mode: 0 for stack, 1 for queue
 * Description: contains info about everything in the program
 */
struct valStack
{
	char *n;
	char *code;
	int mode;
	char *file;
} valStack;
#endif
