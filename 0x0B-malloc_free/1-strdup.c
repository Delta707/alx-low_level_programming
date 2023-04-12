#include "main.h"

/**
 * _strdup - Memory for space location
 * @str: char stored
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ace;
	int i, t = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ace = malloc(sizeof(char) * (i + 1));

	if (ace == NULL)
		return (NULL);

	for (t = 0; str[t]; t++)
		ace[t] = str[t];
	return (ace);
}
