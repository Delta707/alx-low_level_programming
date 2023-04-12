#include "main.h"

/**
 * str_concat - connecting two strings
 * @s1: input one stored
 * @s2: input two stored
 * Return: Concat of s1 & s2
 */

char *str_concat(char *s1, char *s2)
{
	char *connect;
	int i, r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = r = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[r] != '\0')
		r++;
	connect = malloc(sizeof(char) * (i + r + 1));

	if (connect == NULL)
		return (NULL);
	i = r = 0;
	while (s1[i] != '\0')
	{
		connect[i] = s1[i];
		i++;
	}
	while (s2[r] != '\0')
	{
		connect[i] = s2[r];
		i++;
		r++;
	}
	connect[i] = '\0';
	return (connect);
}
