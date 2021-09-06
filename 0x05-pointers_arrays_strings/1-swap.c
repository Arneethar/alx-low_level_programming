#include "main.h"
/**
 * swap_int - Swapping two integers
 * @a: first integer
 * @b: Second interger
 * Return: true
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
