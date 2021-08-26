/*
 *This prints the size of various types
 */

#include <stdio.h>

/**
 * main - block code
 * Return: 0.
 */
int main(void)
{
	char chartype;
	int inttype;
	long int longtype;
	long long int longlongtype;
	float floatype;

	printf("Size of char: %i byte(s)\n", sizeof(Chartype));
	printf("Size of int: %i byte(s)\n", sizeof(inttype));
	printf("Size of long int: %i byte(s)\n", sizeof(longtype));
	printf("Size of long long int: %i byte(s)\n", sizeof(longlongtype));
	printf("Size of float: %i byte(s)\n", sizeof(floattype));

	return (0);
}
