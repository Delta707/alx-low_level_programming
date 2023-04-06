#include "main.h"

/**
 * _puts_recursion - it prints a string function
 * @s: locally stored
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
