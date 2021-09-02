#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * positive_or_negative - main block
 * @i: number to use
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 1
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
		printf("%i is positive\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);
	else
		printf("%i is zero\n", i);
}
