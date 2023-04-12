#include "main.h"

/**
 * argstostr - concatenate all arguments
 * @ac: int stored
 * @av: 2 pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, n, t = 0, x = 0;
	char *str;


	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			x++;
	}
	x += ac;

	str = malloc(sizeof(char) * x + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[t] = av[i][n];
			t++;
		}
		if (str[t] == '\0')
		{
			str[t++] = '\n';
		}
	}
	return (str);
}
