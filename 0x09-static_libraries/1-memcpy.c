#include "main.h"

/**
 * _memcpy - Memory area
 * @dest: memory stored
 * @src: memory coped
 * @n: number of bytes
 * Return: copied memory with n byted
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int t = n;

	for (; i < t; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
