/*
 * Printing the lowercase in reverse
 */
#include <stdio.h>
/**
 * main - using putchar to print
 * lowercase in reverse
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
