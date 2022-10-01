#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer with the constant
 * @n: number of bytes pointed to
 * @b: char
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
