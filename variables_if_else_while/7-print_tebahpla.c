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
char x;
for (x = 'z'; x >= 'a'; x--)
{
	putchar (x);
}
putchar ('\n');
	return (0);
}
