#include<stdio.h>

/**
 * main - the main function
 *
 * @argc: the length of the argument command
 * @argv: an array of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}
