#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

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
	int cents;
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		puts("0");
	}
	else
	{
		for (cents = atoi(argv[1]); cents > 0;)
		{
			if (cents - 25 >= 0)
			{
				cents -= 25;
				change++;
			}
			else if (cents - 10 >= 0)
			{
				cents -= 10;
				change++;
			}
			else if (cents - 5 >= 0)
			{
				cents -= 5;
				change++;
			}
			else if (cents - 2 >= 0)
			{
				cents -= 2;
				change++;
			}
			else
			{
				change += cents;
				break;
			}
		}
		printf("%d\n", change);
	}
	return (0);
}
