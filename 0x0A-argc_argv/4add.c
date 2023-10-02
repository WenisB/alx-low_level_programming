#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the name of program
 * @argc: First argument
 * @argv: Second argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result;
	int i;

	result = 0;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
		{
			printf("%d\n", result);
		}
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result += atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);

}
