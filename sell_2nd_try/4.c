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
	char *cmd_path;
	//(void)ac;

	argv = NULL;
	ac = 0;
	printf("%d", ac);
	/* create an infinite loop */
	while(1)
	{
		//1
		printf("%s", prompt);
		n_read = getline(&line, &n, stdin);
		/* check if the getline function failed or user use CTRL + D */
		if (n_read == -1)
		{
			printf("Exiting Simple Shell...\n");
			free(line_copy);
			free(line);
			printf("%d", ac);
			for (i = 0; i < num_tokens; i++)
                        {
                                free(argv[i]);
                        }
			free(argv);
			return (-1);
		}
		//printf("%s", line);
		//2
		if (line_copy != NULL)
		{
			free(line_copy);
		}
		line_copy = malloc(sizeof(char) * n);
		if (line_copy == NULL)
		{
			perror("tsh: memory allocation error");
			free(line);
			free(line_copy);
			free(argv);
			return (-1);
		}
		strcpy(line_copy, line);
		//printf("%s\n", line_copy);
		//3
		tokens = strtok(line, delim);
		ac = num_tokens;
		while (tokens != NULL)
		{
			//printf("%s\n", tokens);
			num_tokens++;
			tokens = strtok(NULL, delim);
		}
		num_tokens++;
		//4
	       	if (argv != NULL)
                {
			for (i = 0; i < ac; i++)
			{
				free(argv[i]);
			}

			free(argv);
                }
		argv = malloc(sizeof(char *) * num_tokens);
		if (argv == NULL)
		{
			perror("tsh: memory allocation error");
			free(line_copy);
			free(line);
			free(argv);
			return (-1);
		}
		tokens = strtok(line_copy, delim);
		for (i = 0; tokens != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * (strlen(tokens) + 1));
			/*if (argv[i] == NULL)
			{
				perror("tsh: memory allocation error");
				free(line_copy);
				free(line);
				free(argv);
				return (-1);
			}*/
			strcpy(argv[i], tokens);
			printf("%s\n", argv[i]);
			tokens = strtok(NULL, delim);
		}
		argv[i] = NULL;
	}
}
