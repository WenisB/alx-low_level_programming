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
	int a, b, addition = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[b][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		addition += atoi(argv[a]);
	}
	printf("%d\n", addition);
	return (0);
}

