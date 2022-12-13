#include "stdio.h"

/**
 * print_alphabet - from a-z.
 * Return: Nothing.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

}
