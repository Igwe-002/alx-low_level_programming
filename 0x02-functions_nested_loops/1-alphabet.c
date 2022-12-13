#include "stdio.h"

/**
 * print_alphabet - from a-z.
 * Return: Nothing.
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
