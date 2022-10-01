#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: value at dest pointer
 * @src: value at src pointer
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
