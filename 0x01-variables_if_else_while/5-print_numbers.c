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
char new_line;

new_line = '\n';
for (num = 0 ; num <= 9 ; num++)
{
printf("%d", num);
}
putchar(new_line);
return (0);
}
