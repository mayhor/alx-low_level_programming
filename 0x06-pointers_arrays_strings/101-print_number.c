#include "main.h"

/**
 * print_number - prints an integer
 * @n: to be printed
 */

void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		a = -a;
	}

	if (a / 10)
		print_number(a / 10);

	_putchar((a % 10) + '0');
}
