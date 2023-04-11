#include "main.h"

/**
 * _strstr - substring function
 * @haystack: input stored
 * @needle: input stored
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *t = needle;

		while (*l == *t && *t != '\0')
		{
			l++;
			t++;
		}
		if (*t == '\0')
			return (haystack);
	}
	return (0);
}
