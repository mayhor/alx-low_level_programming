#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string followed by a new line
 * @str: to be halfed
 */

void puts_half(char *str)
{
	int i, len, half;
	
	len = strlen(str);
	half = (len - 1) / 2;
	for (i = half + 1; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
