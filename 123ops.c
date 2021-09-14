#include "monty.h"

/**
 * push - Adds values to the top of the stack
 * @stack: Head of the stack
 * 
 * @linenumber: Line number of monty file
 */

void push(stack_t **stack, unsigned int linenumber)
{
	stack_t *tops;
	(void)line_number;

	tops = malloc(sizeof(stack_t));
	if (tops == NULL)
	{
		fprint(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);	
	}

	tops-> = var_global.push_arg;
	tops->next = *stack;
	tops->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = top;
	*stack = top;

}


/** pall - print all function
 * @stack: pointer to linked list stack
 * @line_number: number a line opcode occurs on
 */

void pall(stack_t **stack, unsigned int line_number);
{
	stack_t *printem;

	printem = *stack;
	while (printem != NULL)
	(
		printf("%d\n", printem->n);
		printem = printem->next;
	)
}


/**
 * pop - remvove element a list
 * @stack: pointer to first node
 * @line_number: integer
 * Return: void
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *c_ya = *stack;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = c_ya->next;
	if (*stack != NULL) 
		(*stack)->prev = NULL;
	free(c_ya);
}
