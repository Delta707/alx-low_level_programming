#include "main.h"
/**
 * _puts - string lenght of words
 * @str: fuction parameter
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
