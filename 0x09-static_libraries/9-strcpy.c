#include "main.h"

/**
 * _strcpy - Copies the string pointer to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int v = 0;
	int b = 0;

	while (*(src + v) != '\0')
	{
		v++;
	}
	for (; b < v ; b++)
	{
		dest[b] = src[v];
	}
	dest[v] = '\0';
	return (dest);
}
