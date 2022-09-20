#include "main.h"
#include "string.h"

/**
 * rev_string - reverses a string
 * @s: to be reversed
 */

void rev_string(char *s)
{
	int i, j = 0;
	int len = strlen(s);
	char temp;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}

}
