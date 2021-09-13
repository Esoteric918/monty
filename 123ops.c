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
	tops->prev - NULL;
	if (*stack != NULL)
		(*stack)->prev = top;
	*stack = top;

}








}
