#include "monty.h"

/**
 * push - Adds values to the top of the stack
 * @stack: Head of the stack
 * 
 * @linenumber: Line number of monty file
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	(void)line_number;

	top = malloc(sizeof(stack_t));
	if (top == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_list(global_variable.stack);
		fclose(global_variable.file);
		exit(EXIT_FAILURE);	
	}

	top = global_variable.line_number;
	top->next = *stack;
	top->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = top;
	*stack = top;

}


/** pall - print all function
 * @stack: pointer to linked list stack
 * @line_number: number a line opcode occurs on
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *printem;

	printem = *stack;
	(void) line_number;
	while (printem != NULL)
	
		printf("%d\n", printem->n);
		printem = printem->next;
	}
}


/**
 * pop - remvove element a list
 * @stack: pointer to first node
 * @line_number: integer
 * Return: void
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *c_ya = NULL;

	(void) line_number;
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free_list(global_variable.stack);
		fclose(global_variable.file);
		exit(EXIT_FAILURE);
	}
	*stack = c_ya->next;
	if (*stack != NULL) 
		(*stack)->prev = NULL;
	free(c_ya);
}
