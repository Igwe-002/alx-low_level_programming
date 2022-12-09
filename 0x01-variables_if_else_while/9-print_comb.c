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

for (num = '0' ; num <= '9' ; )
{
putchar(num);
if (num <= '8')
{
putchar(',');
putchar(' ');
num++;
}
else
num++;
}
putchar('\n');
return (0);
}
