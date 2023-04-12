#include "main.h"

/**
 * alloc_grid - the return 2 dimensional array of integer
 * @width: width stored
 * @height: height stored
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **ace;
	int w, e;

	if (width <= 0 || height <= 0)
		return (NULL);
	ace = malloc(sizeof(int *) * height);

	if (ace == NULL)
		return (NULL);
	for (w = 0; w < height; w++)
	{
		ace[w] = malloc(sizeof(int) * width);

		if (ace[w] == NULL)
		{
			for (; w >= 0; w--)
				free(ace[w]);

			free(ace);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (e = 0; e < width; e++)
			ace[w][e] = 0;
	}
	return (ace);
}
