#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			res *= atoi(argv[a]);
		}
		printf("%d\n", res);
	}
	return (0);
}
