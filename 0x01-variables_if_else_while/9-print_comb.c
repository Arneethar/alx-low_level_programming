/*
 * Script with numbers seperated by comma
 * in ascending order
 */
#include <stdio.h>
/**
 * main - code block
 * Return: 0
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}
	putchar('\n');

	return (0);
}
