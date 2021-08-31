/*
 *Printing natural numbers
 */
#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printing all natural numbers from
 * 0 - 98
 * @n: int number
 * Return: result
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	printf("\n");
}
