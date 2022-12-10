#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c;
	long int l;
	long long int m;
	float f;

	printf("Size of char: %lu byte(s)\n", (unsigned)sizeof(c));
	printf("Size of int: %lu byte(s)\n", (unsigned)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned)sizeof(m));
	printf("Size of a float: %lu byte(s)\n", (unsigned)sizeof(f));

	return (0);
}
