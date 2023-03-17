#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the main function of the program
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int d0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d0 = n % 10;
	printf("Last digit of %d is %d and ", n, d0);
	if (d0 > 5)
		printf("is greater than 5\n");
	else if (d0 == 0)
		printf("is 0\n");
	else
		printf("is less than 6 and not 0\n");
	return (0);
}
