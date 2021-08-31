/*
 * checking for lowercase c
 */

#include "main.h"
/**
 * _islower - check for c lowercase
 * @c: check this character
 * Return:1 if c is lowercase, Return 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
