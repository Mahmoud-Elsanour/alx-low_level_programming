/**
 * print_name - A function to print a name
 *
 * @name: the name
 * @f: the function which will print the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
