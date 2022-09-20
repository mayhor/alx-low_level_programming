#include "main.h"

/**
 * _strcpy - copies string from src to dest buffer
 * @src: origin of the string
 * @dest: pointer to buffer
 * Return: dest pointer to buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
