#include "f.h"

/**
 * display_prompt - Displays the shell prompt.
 */
void display_prompt(void)
{
	if (isatty(STDIN_FILENO))  /*Check if stdin is a terminal*/
	{
		write(STDOUT_FILENO, "#alxisfun$ ", 11);
	}
}

