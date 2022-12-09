#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
char *str = "0123456789";

for (num = 0 ; num <= 9 ; num++)
{
putchar(str[num]);
}
putchar('\n');
return (0);
}
