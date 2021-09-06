#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array
 * @n: character
 * @a: int type array character
 * Description: number must be sepersted by comma
 * return: always true
 */
void print_array(int *a, int n)
{
	int i;

	for ( i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
