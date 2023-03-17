#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */
int main(void)
{
	char * alphabet = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for(i = 0; i < 27; i++)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
