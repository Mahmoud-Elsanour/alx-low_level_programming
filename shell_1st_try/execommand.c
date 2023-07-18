#include "shell.h"

void execmd(char *cmd, char **argv)
{
	//char *command = NULL;


	if (argv)
	{
		//command = argv[0];

		if (execve(cmd, argv, NULL) == -1)
		{
			perror("Error:");

		}
	}
}

