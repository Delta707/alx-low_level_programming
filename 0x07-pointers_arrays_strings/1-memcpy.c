#include "main.h"

/**
 * _memcpy - Copies memory area function
 * @dest: Data stored here
 * @src: Data coped
 * @n: memory of byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int s = n;

	for (; t < s ; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
