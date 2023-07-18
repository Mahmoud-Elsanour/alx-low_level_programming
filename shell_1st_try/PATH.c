#include "shell.h"

/**
 * get_paths - prints the environment
 *
 * Return: p
 */
list_t *get_paths(void)
{
	char *paths;
	char *path;
	char *delim = ":";
	list_t *p = NULL;

	paths = _getenv("PATH");
	path = strtok(paths, delim);
                while (path != NULL)
		{
			add_node_end(&p, path);
			path = strtok(NULL, delim);
		}
		//add_node_end(&p, "");

	return (p);
}
