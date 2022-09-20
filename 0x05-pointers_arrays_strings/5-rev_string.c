#include "main.h"

/**
 * rev_string - reverses a string
 * @str: to be reversed
 */

void rev_string(char *s)
{
	int i, j = 0;
	int len = strlen(str);
	char temp;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}

}
