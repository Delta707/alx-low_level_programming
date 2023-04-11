#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: value stored
 * @s2: value stored
 * Return: s1[t] - s2[t]
 */

int _strcmp(char *s1, char *s2)
{
	int t;

	t = 0;
	while (s1[t] != '\0' && s2[t] != '\0')
	{
		if (s1[t] != s2[t])
		{
			return (s1[t] - s2[t]);
		}
		t++;
	}
	return (0);
}
