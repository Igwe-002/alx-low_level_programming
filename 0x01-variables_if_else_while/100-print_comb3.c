#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = '0' ; a <= '8' ; )
	{
		for (b = '0' ; b <= '9' ; )
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (!(a == '8' && b == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
