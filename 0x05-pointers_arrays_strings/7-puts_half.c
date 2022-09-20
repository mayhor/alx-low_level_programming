#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string followed by a new line
 * @s: to be halfed
 */

void puts_half(char *str)
{
	int i, len, half;
	
	len = strlen(s);
	half = (len - 1) / 2;
	for (i = half + 1; i < len; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
