/*
 * File: 1-alphabet.c
 * printing the alphabet in lower case
 */

#include "main.h"

/**
 * print_alphabet - printing alphabet in lowercase
 * This function is void
 * Return: 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
