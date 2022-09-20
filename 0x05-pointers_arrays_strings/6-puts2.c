#include "main.h"
#include "string.h"

/**
 * puts2 - print one char out of 2 of a string
 * @str: string to print
 */

void puts2(char *str)
{
	int i, j;

	j = strlen(str);

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		_putchar(*(str + i));
	}
	_putchar('\n');
}
