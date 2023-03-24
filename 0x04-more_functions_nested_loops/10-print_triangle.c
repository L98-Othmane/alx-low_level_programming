#include "main.h"

/**
  * print_triangle - print traingle with #'s with given size
  * @s: size of triangle
  */

void print_triangle(int s)
{
	int i;
	int j;
	int k;

	if (s <= 0)
		_putchar('\n');

	for (i = 1; i <= s; i++)
	{
		for (j = 1; j <= (s - i); j++)
			_putchar(' ');

		for (k = 1; k <= i; k++)
			_putchar('#');

		_putchar('\n');
	}
}
