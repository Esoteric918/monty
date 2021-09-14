#include "monty.h"
global_var global_variable;
/**
 * exec - Entry point
 * Description: execute opcode function
 * @array: double pointer that point to 2d array
 * Return: no thing
 */
void execOp(char (*array)[80])
{
	int j = 0;
	instruction_t func_array[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL},
		};
	for (j = 0; j < 7; j++)
	{
		if (strcmp(func_array[j].opcode, array[0]) == 0)
		{
			global_variable.number = array[1];
			func_array[j].f(&(global_variable.stack),
					global_variable.line_number);
			return;
		}
		else if (array[0][0] == '#')
			nop(&(global_variable.stack),
			    global_variable.line_number);
		else if (j == 6)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n",
				global_variable.line_number, array[0]);
			fclose(global_variable.file);
			free_list(global_variable.stack);
			exit(EXIT_FAILURE);
		}
	}
}
