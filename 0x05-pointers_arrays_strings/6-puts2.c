#include "main.h"

/**
 * puts2 - print strings
 * @str: function parameter
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i;
	int count = 0;
	int t = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		count++;
	}
	t = count - 1;
	for (i = 0 ; i <= t ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
