#include "main.h"

/**
 * _strlen - returns the length of @s
 * @s: the string
 * Return: length of @s
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len])
		len++;
	return (len);
}
