/*
 *Printing using putc
 */




#include <stdio.h>
/**
 * main - Writing lowercase letter
 * Remove letter c and e
 * using the for command
 * using putchar function
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
