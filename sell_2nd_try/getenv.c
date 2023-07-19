#include "shell.h"

/**
 * _getrnv - get the environment variable
 *
 * @name: the variable name
 *
 * Return: the variable or NULL if not found
 */
char *_getenv(const char *name)
{
	int i = 0;
	extern char **environ;
	char *token;
	char *line;
	const char * d = "=";

	while (environ[i] != NULL)
	{
		line = environ[i];
		token = strtok(line, d);
		//printf("Line: %s\n Token: %s\n", line, token);
		if (strcmp(token, name) == 0)
		{
			//printf("\ntomsto~\n");
			//free(token);
			//printf("%s\n", strtok(NULL, d));
			return (strtok(NULL, d));
			//return ("Interesting\n\n");
		}
		i++;
	}
	//free(token);
	return (NULL);
}
