#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */
int main(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] == 'q' || alphabet[i] == 'e')
			continue;
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
