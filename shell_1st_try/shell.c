#include "shell.h"

int main(int ac, char **argv)
{
	char *prompt = "$ ";
	char *line;
	size_t n = 0;
	ssize_t n_read;
	char *line_copy = NULL;
	const char *delim = " \n";
	int num_tokens = 0;
	int i;
	char *tokens;
	pid_t child_pid;
	char *cmd_path;
	(void)ac;

	/* create an infinite loop */
	while(1)
	{
		printf("%s", prompt);
		n_read = getline(&line, &n, stdin);
		/* check if the getline function failed or user use CTRL + D */
		if (n_read == -1)
		{
			printf("Exiting Simple Shell...\n");
			return (-1);
		}
		line_copy = malloc(sizeof(char) * n_read);
		if (line_copy == NULL)
		{
			perror("tsh: memory allocation error");
			return (-1);
		}
		strcpy(line_copy, line);
		tokens = strtok(line, delim);
		while (tokens != NULL)
		{
			num_tokens++;
			tokens = strtok(NULL, delim);
		}
		num_tokens++;
		argv = malloc(sizeof(char *) * num_tokens);
		/*
		if (argv == NULL)
                {
                        perror("tsh: memory allocation error");
                        return (-1);
                }
		*/
		tokens = strtok(line_copy, delim);
		for (i = 0; tokens != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * strlen(tokens));
			strcpy(argv[i], tokens);
			tokens = strtok(NULL, delim);
		}
		argv[i] = NULL;
		/*
		for (i = 0; i<num_tokens-1; i++)
		{
			printf("%s\n", argv[i]);
		}
		*/
		//NEW TwT
		cmd_path = _stat(argv[0]);
		if(cmd_path == NULL)
		{
			printf("No such file or directory");
		}
		else
		{
			printf("\n%s\n\n", argv[0]);
			printf("\n%s\n\n", cmd_path);
			child_pid = fork();
			if (child_pid == -1)
			{
				perror("Error:");
				return (-1);
			}
			if (child_pid == 0)
			{
				execmd(cmd_path, argv);
				free(cmd_path);
			}
			else
			{
				wait(&i);
			}
		}
	}
	/* free up allocated memory */
	free(line);
	free(tokens);
	free(argv);
	free(line_copy);

	return (0);
}
