#include "monty.h"
global_var global_variable;

/**
 *  main - entry point
 * @argc: argument count
 * @argv: argument value
 * Description: run the m file
 * Return: 0
 */
int main (int argc, char **argv)
{
    char line[80];
    char *token;
    char array[2][80];
    int i = 0;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    global_variable.file = fopen(argv[1], "r");
    if (!(global_variable.file))
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

}