#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: the encoded string
 */

char *leet(char *str)
{
	int a, b;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (c[b] != '\0')
		{
			if (str[a] == c[b])
			{
				str[a] = d[b];
			}
			b++;
		}
		a++;
	}
	return (str);
}
