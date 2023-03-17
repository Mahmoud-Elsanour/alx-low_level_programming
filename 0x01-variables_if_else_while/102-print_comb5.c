#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int start_i;
	int start_j;

	start_i = 1;
	start_j = 0;
	start_k = 0;
	start_l = 0;
	for (l = 0; l < 10; l++)
	{
		for (k = 0; k < 10; k++)
		{
			for (j = start_j; j < 10; j++)
			{
				for (i = start_i; i < 10; i++)
				{
					putchar(48 + l);
					putchar(48 + k);
					putchar(' ');
					putchar(48 + j);
					putchar(48 + i);
					if (l == 9 && k == 8)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
			start_i++;
			if (start_i == 10)
			{
				start_i = 0;
				start_j++;
			}
		}
	}
	putchar('\n');
	return (0);
}
