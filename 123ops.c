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

/**
 * _pall - print all function
 * @stack: pointer to linked list stack 
 * @line_number: number line opcode occurs on
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t = *pwall;

	pwall = *stack;
	if (pwall == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", pwall->n);
}

