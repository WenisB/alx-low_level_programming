#include "main.h"
/**
 * *_strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lgthd, lgths;

	lgthd = 0;
	lgths = 0;

	while (*(dest + lgthd) != '\0')
		lgths++;

	while (*(src + lgths) != '\0' && lgthd < 97 && lgths < n)
	{
		*(dest + lgthd) = *(src + lgths);
		lgthd++;
		lgths++;
	}
	*(dest + lgthd) = '\0';
	return (dest);
}
