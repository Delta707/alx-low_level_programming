#include "function_pointers.h"

/**
 * print_name - It print a name
 * @name: string added
 * @f: pointer to function
 * Return: 0 always
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
