#include<unistd.h>
#include <string.h>

/**
 * main
 * Return: 1.
*/

int main(void)
{
	char buf[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, buf, strnlen(buf));
	return (1);
}
