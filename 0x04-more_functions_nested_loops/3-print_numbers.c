#include "main.h"
/**
 * print_numbers - printing number 0 - 9
 * using _purchar
 * Return:0
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}
