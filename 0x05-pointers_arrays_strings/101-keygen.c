#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum;
	char c;

	srand(time(0));
	sum = 0;
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
