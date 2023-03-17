#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */
int main(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	char *ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ$";
	int i;

	for (i = 0; i < 26; i++)
		putchar(alphabet[i]);
	for (i = 0; i < 27; i++)
                putchar(ALPHABET[i]);
	putchar('\n');
	return (0);
}
