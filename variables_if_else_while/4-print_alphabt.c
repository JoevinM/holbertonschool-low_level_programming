#include <stdio.h>
/**
 *main-Entry point of the program
 *
 *This program prints all characters of alphabet without 'e' and 'q' characters,
 *followed by a new line.
 *
 *Return:Always 0 (success)
 */

int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
/**
 * This function ignore 'e' and 'q' characters
 */
	if (x != 'e' && x != 'q')
	putchar (x);
}
putchar ('\n');
return (0);
}
