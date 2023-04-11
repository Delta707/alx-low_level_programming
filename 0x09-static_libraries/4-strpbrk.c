#include "main.h"

/**
 * _strpbrk - Searching of a string
 * @s: input stored
 * @accept: locally stored
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int d;

	while (*s)
	{
		for (d = 0; accept[d] ; d++)
		{
			if (*s == accept[d])
				return (s);
		}
		s++;
	}
	return ('\0');
}
