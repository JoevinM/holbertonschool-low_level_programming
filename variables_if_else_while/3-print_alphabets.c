#include <stdio.h>
/**
 *main-Entry point of the program
 *
 *This program prints all characters of alphabet.
 *followed by a new line.
 *
 *Return:Always 0 (success)
 */

int main(void)
{
char x, y;
for (x = 'a'; x <= 'z'; x++)
{
	putchar (x);
}
for (y = 'A' ; y <= 'Z' ; y++)
{
	putchar (y);
}
putchar ('\n');
	return (0);
}
