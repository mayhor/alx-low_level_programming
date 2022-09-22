#include "main.h"

/**
 * rot13 - encodes astring using rot13
 * @str: string to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
	int a, b;

	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (c[b] != '\0')
		{
			if (str[a] == c[b])
			{
				str[a] = rot[b];
				break;
			}
			b++;
		}
		a++;
	}
	return (str);
}
