#include "main.h"
/**
 * *_strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int lgthd, lgths;

	lgthd = 0;
	lgths = 0;

	while (*(dest + lgthd) != '\0')
		lgthd++;
	while (*(src + lgths) != '\0' && lgthd < 97)
	{
		*(dest + lgthd) = *(src + lgths);
		lgthd++;
		lgths++;
	}
	*(dest + lgthd) = '\0';
	return (dest);
}
