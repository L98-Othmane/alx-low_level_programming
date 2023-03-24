#include "main.h"

/**
  * print_square - print a square of #'s given size
  * @s: size to draw
  */

void print_square(int s)
{
	int r, c;

	if (s > 0)
	{
		for (r = 1; r <= s; r++)
		{
			for (c = 1; c <= s; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
