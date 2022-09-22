#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input string
 * @s2: input string
 * Return: 0 if equal or q if different
 */

int _strcmp(char *s1, char *s2)
{
	int m = 0;
	int q = 0;

	while (s1[m] != '\0' && q == 0)
	{
		q = s1[m] - s2[m];
		m++;
	}
	return (q);
}
