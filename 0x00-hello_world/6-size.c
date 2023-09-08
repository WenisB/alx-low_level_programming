#include <stdio.h>
/**
 * main - Entry point: prints sizes of char, int, long int, etc
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int ln;
	float f;

	printf("Size of a char: %lu\n", sizeof(c));
	printf("Size of an int: %lu\n", sizeof(i));
	printf("Size of a long int: %lu\n", sizeof(l));
	printf("Size of a long long int: %lu\n", sizeof(ln));
	printf("Size of a float: %lu\n", sizeof(f));

	return (0);
}
