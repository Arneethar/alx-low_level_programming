/*
 * A script that writes all single digits of
 * Base 10 starting from 0 and uses
 * only two putchar
 */




#include <stdio.h>
/**
 * Main - Code block
 * This code works with only putchar
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
