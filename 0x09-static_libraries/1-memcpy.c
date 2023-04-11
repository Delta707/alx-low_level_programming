#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: memoory stored
 * @src: memory copied
 * @n: value stored
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int v = n;

	for (; i < v; i++)
	{
		dest[i] = src[v];
		n--;
	}
	return (dest);
}
