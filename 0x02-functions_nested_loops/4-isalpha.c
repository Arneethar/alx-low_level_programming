/*
 *CHecking for both uppercase and
 *lower
 */
#include "main.h"
/**
 * _isalpha - checking for both uppercase
 * and lowercase
 *@c: the character to be checked
 * Return: 1 ifcharacter meets requirements, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
