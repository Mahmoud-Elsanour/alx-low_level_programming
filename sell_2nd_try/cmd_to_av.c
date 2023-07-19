#include "shell.h"

/**
 * main - a function that splits a string and returns an array of each word of the string.
 *
 * Return: Always 0.
 */
int main(int ac, char **argv)
{
	char *prompt = "$ ";
	char *line = NULL;
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
			/* free up allocated memory */
			free(line);
			//free(tokens);
			free(argv);
			free(line_copy);

			return (-1);
		}
		line_copy = malloc(sizeof(char) * n_read);
		if (line_copy == NULL)
		{
			perror("tsh: memory allocation error");
			/* free up allocated memory */
			free(line);
			free(argv);
			//free(tokens);
			free(line_copy);
			return (-1);
		}
		strcpy(line_copy, line);
		tokens = strtok(line, delim);
		while (tokens != NULL)
		{
			num_tokens++;
			//free(tokens);
			tokens = strtok(NULL, delim);
		}
		num_tokens++;
		argv = malloc(sizeof(char *) * num_tokens);
		if (argv == NULL)
                {
                        perror("tsh: memory allocation error");
			/* free up allocated memory */
			free(line);
			//free(tokens);
			free(argv);
			free(line_copy);
                        return (-1);
                }
		tokens = strtok(line_copy, delim);
		for (i = 0; tokens != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * strlen(tokens));
			strcpy(argv[i], tokens);
			//free(tokens);
			tokens = strtok(NULL, delim);
		}
		argv[i] = NULL;

		for (i = 0; i<num_tokens-1; i++)
		{
			printf("%s\n", argv[i]);
		}
		/* free up allocated memory */
		//free(line);
		//free(tokens);
		//free(argv);
		//free(line_copy);
	}
	/* free up allocated memory */
                free(line);
                //free(tokens);
                free(argv);
                free(line_copy);
}
