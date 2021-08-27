/*
 *Printing using putc
 */




#include <stdio.h>
/**
 * main - Writing lowercase letter
 * using the for command
 * using putchar function
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
