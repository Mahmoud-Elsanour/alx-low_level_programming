#include "shell.h"

int main(int ac, char **argv)
{
	char *prompt = "$ ";
	char *line;
	size_t n = 0;
	ssize_t n_read = 0;
	char *line_copy = NULL;
	const char *delim = " \n";
	int num_tokens = 0;
	int i = 0;
	char *tokens = NULL;
	pid_t child_pid;
	char *cmd_path = NULL;
	list_t *paths = get_paths();
	//(void)ac;

	argv = NULL;
	ac = 0;
	//printf("ac: %d\n", ac);
	/* create an infinite loop */
	while(1)
	{
		//1
		printf("ENTERING-1 ...\n");
		printf("%s", prompt);
		n_read = getline(&line, &n, stdin);
		/* check if the getline function failed or user use CTRL + D */
		if (n_read == -1)
		{
			printf("Exiting Simple Shell...\n");
			printf("General Free\n");
			free(line_copy);
			free(line);
			//printf("ac: %d\n", ac);
			for (i = 0; i < num_tokens; i++)
                        {
                                free(argv[i]);
                        }
			//free(cmd_path);
			free(argv);
			free_list(paths);
			return (-1);
		}
		printf("LEAVING-1 ...\n");
		//printf("%s", line);
		//2
		printf("ENTERING-2 ...\n");
		if (line_copy != NULL)
		{
			printf("Line Copy Free\n");
			free(line_copy);
		}
		line_copy = malloc(sizeof(char) * n);
		if (line_copy == NULL)
		{
			printf("Line General Free\n");
			perror("tsh: memory allocation error");
			free(line);
			free(line_copy);
			free(argv);
			free(cmd_path);
			return (-1);
		}
		strcpy(line_copy, line);
		//printf("%s\n", line_copy);
		printf("LEAVING-2 ...\n");
		//3
		printf("ENTERING-3 ...\n");
		tokens = strtok(line, delim);
		ac = num_tokens;
		while (tokens != NULL)
		{
			//printf("%s\n", tokens);
			num_tokens++;
			tokens = strtok(NULL, delim);
		}
		num_tokens++;
		printf("LEAVING-3 ...\n");
		//4
	       	printf("ENTERING-4 ...\n");
		if (argv != NULL)
                {
			for (i = 0; i < ac; i++)
			{
				printf("Argv[%d] Free\n", i);
				free(argv[i]);
			}

			printf("Argv Free\n");
			free(argv);
                }
		argv = malloc(sizeof(char *) * num_tokens);
		if (argv == NULL)
		{
			perror("tsh: memory allocation error");
			free(line_copy);
			free(line);
			free(argv);
			free(cmd_path);
			return (-1);
		}
		tokens = strtok(line_copy, delim);
		for (i = 0; tokens != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * (strlen(tokens) + 1));
			strcpy(argv[i], tokens);
			//printf("%s\n", argv[i]);
			tokens = strtok(NULL, delim);
		}
		argv[i] = NULL;
		printf("LEAVING-4 ...\n");
		//5
		printf("ENTERING-5 ...\n");
		//wait~
		//continue~
		//printf("%s\n", argv[0]);
		cmd_path = stat_cmd(argv[0], paths);
		//printf("%s\n", cmd_path);
		if(cmd_path == NULL)
		{
			printf("./shell: No such file or directory\n");
		}
		else
		{
			//printf("\n%s\n\n", argv[0]);
			//printf("\n%s\n\n", cmd_path);
			child_pid = fork();
			if (child_pid == -1)
			{
				perror("Error:");
				return (-1);
			}
			if (child_pid == 0)
			{
				execmd(cmd_path, argv);
				//free(cmd_path);
			}
			else
			{
				wait(&i);
				printf("Cmd Path Free\n");
				free(cmd_path);
			}
		}
		printf("LEAVING-5 ...\n");

	}
}
