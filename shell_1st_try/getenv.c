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
		if (strcmp(token, name) == 0)
		{
			//free(token);
			return (strtok(NULL, d));
		}
		i++;
	}
	//free(token);
	return (NULL);
}
