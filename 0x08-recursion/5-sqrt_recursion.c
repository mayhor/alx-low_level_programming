#include "main.h"

/**
 * sqr_a - entry
 * @a: input
 * @b: input
 * Return: 0
 */

int sqr_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqr_a(a, b + 1));
}

/**
 * _sqrt_recursion - square root of a number
 * @n: input
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (sqr_a(n, 0));
}
