#include "main.h"

/**
 * _memset - Memory that stored byte data
 * @n: filled with byte to be changed
 * @b: destination
 * @s: stored value
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int c = 0;

	for (; n > 0 ; c++)
	{
		s[c] = b;
		n--;
	}
	return (s);
}
