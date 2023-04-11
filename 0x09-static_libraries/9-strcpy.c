#include "main.h"

/**
 * _strcpy - a function that copies string
 * @dest: Copy stored
 * @src: destination
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int t = 0;
	int v = 0;

	while (*(src + t) != '\0')
	{
		t++;
	}
	for (; v < t ; v++)
	{
		dest[v] = src[t];
	}
	dest[t] = '\0';
	return (dest);
}
