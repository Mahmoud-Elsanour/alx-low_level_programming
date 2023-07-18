#include "shell.h"

/**
 * _stat - stat but returns the cmd path
 *
 * Return: Always 0.
 */
char *_stat(char *cmd)
{
	struct stat st;
	list_t *p;
	char * full_path;

	/*if (ac < 2)
	{
		printf("Usage: %s path_to_file ...\n", av[0]);
		return (1);
	}
	*/
	p = get_paths();

	while (p->next != NULL)
	{
		/*if str is NULL return len as 0 and str as (nil)*/
		full_path = malloc(p->len + strlen(cmd + 2));
		if(full_path != NULL)
		{
			full_path[0] = '\0';
			strcat(full_path, p->str);
			strcat(full_path, "/");
			strcat(full_path, cmd);
		}
		else
		{
			free_list(p);
			return (NULL);
		}
		//printf("%s", full_path);
		if (stat(full_path, &st) == 0)
		{
			printf("FOUND: ");
			printf("%s\n", full_path);
			//*cmd = full_path;
			//free(full_path);
			free_list(p);
			return (full_path);
		}
		/*go to the next node*/
		p = p->next;
	}
	printf("Not Found :( \n");
	//*cmd = NULL;
	free_list(p);
	free(full_path);
	return (NULL);
}
