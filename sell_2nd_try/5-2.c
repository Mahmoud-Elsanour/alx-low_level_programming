#include "shell.h"

/**
 * main - test stat_PATH
 *
 * Return: 1=fail 0=succes
 */
int main()
{
	list_t *p;


	 p = get_paths();
	 print_list(p);
	 free_list(p);
	 //
	 p = get_paths();
         print_list(p);
         free_list(p);
	 //
	 return (0);
}
