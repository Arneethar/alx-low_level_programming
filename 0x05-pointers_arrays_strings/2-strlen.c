#include "main.h"
/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;

	return (length);
}
