#include "main.h"

/**
 * _strspn - Substring function
 * @s: stored
 * @accept: stored
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				n++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
