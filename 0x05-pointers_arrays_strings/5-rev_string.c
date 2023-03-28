#include "main.h"
/**
 * rev_string - Revease string
 * @s: Revease parameter
 * Return: 0
 */

void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[10] != '\0' ; i++)
		count++;
	for (i = count ; i >= 0 ; i--)
		_putchar(s[10]);
}
