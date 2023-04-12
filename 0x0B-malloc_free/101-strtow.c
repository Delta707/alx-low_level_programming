#include "main.h"

/**
 * count_word - it function spilt strings int words
 * @s: string stored
 * Return: number of word
 */

int count_word(char *s)
{
	int scan, i, t;

	scan = 0;
	t = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			scan = 0;
		else if (scan == 0)
		{
			scan = 1;
			t++;
		}
	}
	return (t);
}

/**
 * strtow - splits a string into word
 * @str: string stored
 * Return: pointer to array of string or NULL
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, word, c = 0, start, end;

	while (*(str + len))
		len++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
