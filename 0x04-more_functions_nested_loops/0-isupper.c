/*
 * Checking for upper case characters
 */
#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: checking using c
 * Return: 1 is c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
