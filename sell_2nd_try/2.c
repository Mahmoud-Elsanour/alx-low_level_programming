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
			free(line_copy);
			free(line);
			return (-1);
		}
		printf("%s\n", line);
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
			return (-1);
		}
		strcpy(line_copy, line);
		printf("%s", line_copy);
	}
	//free(line);
	//free(line_copy);
}
