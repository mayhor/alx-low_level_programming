#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input string
 * @src: input string
 * @n: iterations
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int p;

	m = 0;

	while (dest[m] != 0)
	{
		m++;
	}

	p = 0;

	while (src[p] != 0 && p < n)
	{
		dest[m] = src[p];
		m++;
		p++;
	}
	return (dest);
}
