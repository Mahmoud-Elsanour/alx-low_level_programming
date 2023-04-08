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
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
