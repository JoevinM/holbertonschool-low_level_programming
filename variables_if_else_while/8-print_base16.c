#include <stdio.h>
/**
 *main-Entry point of the program
 *
 *This program prints all the numbers of base 16 in lowercase.
 *followed by a new line.
 *
 *Return:Always 0 (success)
 */

int main(void)
{
int x;
char y;
for (x = '0'; x <= '9'; x++)
{
	putchar (x);
}
for (y = 'a' ; y <= 'f' ; y++)
{
	putchar (y);
}
putchar ('\n');
	return (0);
}
