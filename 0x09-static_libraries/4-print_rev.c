#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int scounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		scounter++;
	}

	for (n = (scounter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
