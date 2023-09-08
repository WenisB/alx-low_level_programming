#include <stdio.h>

/**
 * main - Entry point prints the size of various types on the
 * computer it is compiled and run on.
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int ln;
	float f;

	printf("Size of a char: %lu\n",  (unsigned long)sizeof(c));
	printf("Size of an int: %lu\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu\n", (unsigned long)sizeof(ln));
	printf("Size of a float: %lu\n", (unsigned long)sizeof(f));

	return (0);
}
