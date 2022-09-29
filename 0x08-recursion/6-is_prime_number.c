#include "main.h"

/**
 * is_prime_number - check if input is a prime number
 * @n: input
 * Return: 1 if it is a prime number, 0 if it isn't
 */

int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n % i == 0)
		return (0);
	else if (n == 1)
		return (0);
	else if (n < 0)
		return (0);
	else
		return (1);
}
