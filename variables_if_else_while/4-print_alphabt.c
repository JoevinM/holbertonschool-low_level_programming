#include <stdio.h>
/**
 *main-Entry point of the program
 *
 *This program prints all characters of alphabet
 *without 'e' and 'q' characters.
 *
 *Return:Always 0 (success)
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
if (x != 'e' && x != 'q')
	putchar (x);
putchar ('\n');
return (0);
}
