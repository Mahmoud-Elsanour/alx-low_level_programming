#include "shell.h"

/**
 * stat_cmd - find whether the cmd exists or not
 *
 * cmd: the command
 *
 * Return: cmd path
 */
char *stat_cmd(char *cmd, list_t *paths)
{
	struct stat st;
	list_t *p;
	list_t *tmp;
	char * full_path = NULL;

	p = paths; //get_paths();
	tmp = p;

	while (p != NULL)
	{
		//printf("full_path before: %ld\n", (p->len + strlen(cmd + 3)));
		full_path = malloc(p->len + strlen(cmd + 3));
		//printf("full_path after: %ld\n", (p->len + strlen(cmd + 3)));
		if(full_path != NULL)
		{
			full_path[0] = '\0';
			strcat(full_path, p->str);
			strcat(full_path, "/");
			strcat(full_path, cmd);
		}
		else
		{
			//-free_list(tmp);
			return (NULL);
		}
		//printf("full_path real: %s %ld\n", full_path, strlen(full_path));
		if (stat(full_path, &st) == 0)
		{
			//printf("FOUND: ");
			//printf("%s\n", full_path);
			//-free_list(tmp);
			return (full_path);
		}
		/*go to the next node*/
		p = p->next;
		free(full_path);
	}
	//printf("Not Found :( \n");
	//-free_list(tmp);
	return (NULL);
}
