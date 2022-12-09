#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch, new_line;

new_line = '\n';
for (ch = 'a' ; ch <= 'z' ; )
{
if (ch == 'e' || ch == 'q')
ch++;
else
{
putchar(ch);
ch++;
}
}
putchar(new_line);
return (0);
}
