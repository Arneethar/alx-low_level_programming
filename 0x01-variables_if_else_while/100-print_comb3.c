#include <stdio.h>
/**
 * main - print all possible combinations of two digits
 * Numbers must be seperated by commas and a space
 * 01 and 10 are comsidered as the same combination of the two digits
 * Print only the smallest combination of the two digits
 * Numbers must be printed in ascending order
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	a = 0;

	while (a < 100)
	{
		b = a % 10;
		c = a / 10;
		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');

			if (a < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		a++;
	}
	putchar('\n');

	return (0);
}
