#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int A;

	A = 0;
	while (A < n && src[A] != '\0')
	{
		dest[A] = src[A];
		A++;
	}
	while (A < n)
	{
		dest[A] = '\0';
		A++;
	}

	return (dest);
}
