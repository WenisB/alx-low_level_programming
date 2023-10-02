#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the name of program
 * @argc: First argument
 * @argv: Second argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
	printf("%s\n", argv[count]);
	}
	return (0);
}
