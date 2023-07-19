#include "shell.h"

/**
 * main - test stat_cmd
 *
 * Return: 0 = succes, 1 = fail
 */
int main(int ac, char **argv)
{
	if (ac < 2)
	{
		printf("Usage: %s path_to_file ...\n", argv[0]);
		return (1);
	}
	char *cmd_path;
	list_t *paths = get_paths();

	cmd_path = stat_cmd(argv[1], paths);
		if(cmd_path == NULL)
		{
			printf("No such file or directory\n");
			return (1);
		}
		else
		{
			printf("File:%s\n", argv[1]);
			printf("Path:%s\n", cmd_path);
		}
	free(cmd_path);
	//
	cmd_path = stat_cmd(argv[1], paths);
                if(cmd_path == NULL)
                {
                        printf("No such file or directory\n");
                        return (1);
                }
                else
                {
                        printf("File:%s\n", argv[1]);
                        printf("Path:%s\n", cmd_path);
                }
        free(cmd_path);
	//
	free_list(paths);
	return (0);
}
