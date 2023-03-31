#include "main.h"
/**
  * _strncat - concatenates two strings
  * @dest: string with concatenation
  * @src: string to be concatenated
  * @n: size of second string
  * Return: Always 0.
  */
char *_strncat(char *dest, char *src, int n)
{
	int ld, ls;

	ld = 0;
	ls = 0;

	while (*(dest + ld) != '\0')
		ld++;

	while (*(src + ls) != '\0' && ld < 97 && ls < n)
	{
		*(dest + ld) = *(src + ls);
		ld++;
		ls++;
	}
	*(dest + ld) = '\0';
	return (dest);
}
