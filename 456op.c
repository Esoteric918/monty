#include "monty.h"

/*
 * swap - swap the top of the stack with second top stack
 * @stack: pointer to lists for monty stack
 * @line_number: the number the line opcode occers on
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *switch;
	int now; 

	switch = *stack;
	if (switch == NULL || switch->next == NULL)
	{
		fprint(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);	
	}
	now = switch->n;
	switch->n = switch->next->n;
	switch->next->n = no;
}

/**
 * _add - add top of stack with top of second stack
 * @stack: pointer to lists for monty stack
 * @line_number: number line opcode occurs on
 */

void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *now = *stack;
	int sum = 0, i = 0;

	if (now == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	
	while (now)
	{
		now = now->next;
		i++;
	}
	if (stack == NULL || (*stack)->next == NULL || i <= 1)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->next->n + (*stack)->n;
	pop(stack, line_number);

	(*stack)->n = sum;
}

