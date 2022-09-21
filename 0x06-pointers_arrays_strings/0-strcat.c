#include "main.h"
#include <stdio.h>

/**
 * *_strcat - a function that concatenates two strings
 * @*dest: string to be catenated to *src
 * @*src: string to be catenated to *dest
 * Return: a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int index = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[i];
	return (dest);
}
