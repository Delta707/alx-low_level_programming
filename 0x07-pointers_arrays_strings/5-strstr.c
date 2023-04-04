#include "main.h"

/**
 * _strstr - function that locates substrings
 * @haystack: locally stored
 * @needle: locally stored
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *i = haystack;
		char *t = needle;

		while (*i == *t && *t != '\0')
		{
			i++;
			t++;
		}
		if (*t == '\n')
			return (haystack);
	}
	return (0);
}
