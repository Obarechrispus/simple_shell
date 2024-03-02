#include "f.h"

/**
 * main - Simple shell program
 *
 * Return: Always 0.
 */

int main(void)
{
	char *input;

	while (1)
	{
		if (isatty(STDIN_FILENO))  /*Check if stdin is a terminal*/
		{
			display_prompt();
		}
		input = read_input();
		execute_command(input);
		free(input);
	}

	return (0);
}
