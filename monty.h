#ifndef _MONTY_H
#define _MONTY_H

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
	int data;
	struct stack_s *prev_node;
	struct stack_s *next_node;
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
	void (*func)(stack_t **stack, unsigned int line_number);
} instruction_t;
