#include "main.h"

/**
 * _strchr - function that locate the code
 * @s: Locally
 * @c: desination
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int t = 0;

	for (; s[t] >= '\0' ; t++)
	{
		if (s[t] == c)
			return (&s[t]);
	}
	return (0);
}
