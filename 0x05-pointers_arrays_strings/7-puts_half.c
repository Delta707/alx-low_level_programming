#include "main.h"

/**
 * puts_half - print length
 * @str: length parameter
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	if (length % 2 == 0)
	{
		for (i = length / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (length % 2 != 0)
	{
		for (i = (length - 1) / 2 ; str[i] != '\0' ; i++)
				_putchar(str[i]);
		_putchar('\n');
	}
}
