#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: Revease parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (i = count ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
