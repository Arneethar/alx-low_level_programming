#include <stdio.h>
/**
 * main - Code block
 * Description: Print all numbers of base 10 starting with 0
 * This code works with only putchar
 * You can use putchar twice
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');

	return (0);
}
