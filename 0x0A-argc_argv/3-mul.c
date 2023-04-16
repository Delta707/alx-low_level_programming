#include "main.h"

/**
 * _atoi - Multiple two number
 * @v: string stored
 * Return: int int string
 */

int _atoi(char *v)
{
	int i, f, n, len, x, num;

	i = 0;
	f = 0;
	n = 0;
	len = 0;
	x = 0;
	num = 0;

	while (v[len] != '\0')
		len++;

	while (i < len && x == 0)
	{
		if (v[i] == '-')
			++f;

		if (v[i] >= '0' && v[i] <= '9')
		{
			num = v[i] - '0';
			if (f % 2)
				num = -num;
			n = n * 10 + num;
			x = 1;
			if (v[i + 1] < '0' || v[i + 1] > '9')
				break;
			x = 0;
		}
		i++;
	}
	if (x == 0)
		return (0);

	return (n);
}

/**
 * main - multiples two number
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int outcome, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	outcome = num1 * num2;

	printf("%d\n", outcome);

	return (0);
}
