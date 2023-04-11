#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: begin the address of memory to be filled
 * @i: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char i, unsigned int n)
{
	int t = 0;

	for (; n > 0; i++)
	{
		s[t] = i;
		n--;
	}
	return (s);
}
