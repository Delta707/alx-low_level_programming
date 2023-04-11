#include "main.h"

/**
 * _strncat - connect two strings using at most n bytes from src
 * @dest: value stored
 * @src: value stored
 * @n: value stored
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int f;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	f = 0;
	while (f < n && src[f] != '\0')
	{
		dest[i] = src[f];
		i++;
		f++;
	}
	dest[i] = '\0';
	return (dest);
}
