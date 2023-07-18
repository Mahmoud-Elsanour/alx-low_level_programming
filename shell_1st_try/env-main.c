#include "shell.h"
/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
//char *_getenv(const char *name);

int main(int ac, char **av, char **env)
{
    //extern char **environ;
    //unsigned int i;
    //void *p1 = &environ;
    //void *p2 = &env;

    /*i = 0;
    while (env[i] != NULL)
    {
        printf("%s\n", env[i]);
        i++;
    }
    printf("\n\n");
    i = 0;
    while (environ[i] != NULL)
    {
        printf("%s\n", environ[i]);
        i++;
    }*/
    printf("%s\n", _getenv("PATH"));

    //printf("%p\n", p1);
    //printf("%p\n", p2);

    return (0);
}
/*
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
	//printf("%s\n%s\n", token, line);
        if (strcmp(token, name) == 0)
	{
		return (strtok(NULL, d));
	}
        i++;
    }
    return ("Not Found");
}*/
