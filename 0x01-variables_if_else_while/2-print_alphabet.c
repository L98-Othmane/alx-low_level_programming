#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	char l;

	l = 'a';
	while (l != '{')
	{
		putchar (l);
		l++;
	}
	putchar('\n');
	return (0);
}
